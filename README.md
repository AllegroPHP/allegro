## php-allegro

PHP bindings to the [allegro 5](https://liballeg.org/) C library.

**Requirements**
* PHP >= 8.0
* PHP FFI extension available
* allegro 5

**Example:**

```php
require __DIR__ . '/vendor/autoload.php';

use Serafim\FFILoader\Loader;

$loader = new Loader();
$allegroInfo = $loader->load(new \Allegro\Library());

$allegro = $allegroInfo->ffi;

$init = $allegro->al_install_system( \Allegro\Allegro::getInstance()->info->version, function (){});

$display = $allegro->al_create_display(500, 500);
$queue = $allegro->al_create_event_queue();
$timer = $allegro->al_create_timer(1.0 / 60);

$running = true;

while ($running){

}

$allegro->al_destroy_display($display);
```