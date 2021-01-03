## php-allegro

PHP bindings to the [allegro 5](https://liballeg.org/) C library.

**Requirements**
* PHP >= 8.0
* PHP FFI extension available
* allegro 5

**Example:**

```php
require __DIR__ . '/vendor/autoload.php';

use AllegroPHP\Allegro\Allegro;
use AllegroPHP\Allegro\Event\Type;

$allegro = Allegro::getInstance()->info->ffi;

$init = $allegro->al_install_system(Allegro::getInstance()->info->version, function (){});

$display = $allegro->al_create_display(500, 500);
$queue = $allegro->al_create_event_queue();
$timer = $allegro->al_create_timer(1.0 / 60);

$event_queue = $allegro->al_create_event_queue();

$allegro->al_install_keyboard();

$allegro->al_register_event_source($event_queue, $allegro->al_get_keyboard_event_source());
$allegro->al_register_event_source($event_queue, $allegro->al_get_display_event_source($display));
$allegro->al_register_event_source($event_queue, $allegro->al_get_timer_event_source($timer));

$running = true;
$event = $allegro->new('ALLEGRO_EVENT');
while ($running){
    $allegro->al_wait_for_event($event_queue, FFI::addr($event));

    if ($event->type === Type::DISPLAY_CLOSE) {
        $running = false;
    }
}

$allegro->al_destroy_display($display);
```