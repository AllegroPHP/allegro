<?php

namespace AllegroPHP\Allegro;

use Serafim\FFILoader\BitDepth;
use Serafim\FFILoader\Library as BaseLibrary;
use Serafim\FFILoader\OperatingSystem;

class Library extends BaseLibrary
{
    private const LIBRARY_LINUX = 'liballegro.so';

    private const VERSION = <<<'C'
uint32_t al_get_allegro_version(void);
C;
    private ?string $version = null;



    public function getName(): string
    {
        return 'allegro';
    }

    public function getVersion(string $library): string
    {
        if ($this->version === null) {
            $c = \FFI::cdef(self::VERSION, $library);
            $this->version = $c->al_get_allegro_version();
        }
        return $this->version;
    }

    public function getHeaders(): string
    {
        return __DIR__ . '/../resources/allegro.h';
    }

    public function getOutputDirectory(): string
    {
        return __DIR__ . '/../out';
    }

    public function getLibrary(OperatingSystem $os, BitDepth $bits): ?string
    {
        switch (true) {
            case $os->isLinux():
                return self::LIBRARY_LINUX;
            default:
                return null;
        }
    }
}