<?php

declare(strict_types=1);

namespace AllegroPHP\Allegro;

use FFI\Contracts\Preprocessor\PreprocessorInterface;
use FFI\Location\Locator;
use FFI\Preprocessor\Preprocessor;
use FFI\Proxy\Proxy;
use Psr\SimpleCache\CacheInterface;

class Allegro extends Proxy
{
    private readonly string $library;

    public function __construct(
        ?string $library = null,
        CacheInterface $cache = null,
        PreprocessorInterface $pre = new Preprocessor(),
    )
    {
        $this->library = $this->detectLibraryPathname($library);
        $header = $this->getHeader($pre, $cache);
        parent::__construct(\FFI::cdef((string)$header, $this->library));
    }

    private function getHeader(PreprocessorInterface $pre, ?CacheInterface $cache): string|\Stringable
    {
//        if ($cache !== null) {
//        }

        return new Header($pre);
    }

    private function detectLibraryPathname(?string $library): string
    {
        if ($library !== null) {
            return \realpath($library) ?: Locator::resolve($library) ?? $library;
        }

        return match (\PHP_OS_FAMILY) {
            'Windows' => Locator::resolve('liballegro.dll')
                ?? throw new \RuntimeException(<<<'error'
                    Could not load [liballegro.dll].
                    error),
            'BSD',
            'Linux' => Locator::resolve('liballegro.so')
                ?? throw new \RuntimeException(<<<'error'
                    Could not load [liballegro.so].
                    error),
            'Darwin' => Locator::resolve('liballegro.dylib')
                ?? throw new \RuntimeException(<<<'error'
                    Could not load [liballegro.dylib].
                    error),
        };
    }
}
