typedef unsigned long int __uint64_t;
typedef unsigned int ALLEGRO_EVENT_TYPE;


struct _ALLEGRO_DISPLAY_EVENT
{
    int x, y;
    int width, height;
    int orientation;
};

struct _ALLEGRO_JOYSTICK_EVENT
{
   struct ALLEGRO_JOYSTICK *id;
   int stick;
   int axis;
   float pos;
   int button;
};


struct _ALLEGRO_KEYBOARD_EVENT
{
   struct ALLEGRO_DISPLAY* display; /* the window the key was pressed in */
   int keycode;                 /* the physical key pressed */
   int unichar;                 /* unicode character or negative */
   unsigned int modifiers;      /* bitfield */
   bool repeat;                 /* auto-repeated or not */
};

struct _ALLEGRO_MOUSE_EVENT
{
   struct ALLEGRO_DISPLAY *display;
   /* (display) Window the event originate from
    * (x, y) Primary mouse position
    * (z) Mouse wheel position (1D 'wheel'), or,
    * (w, z) Mouse wheel position (2D 'ball')
    * (pressure) The pressure applied, for stylus (0 or 1 for normal mouse)
    */
   int x,  y,  z, w;
   int dx, dy, dz, dw;
   unsigned int button;
   float pressure;
};

struct _ALLEGRO_TIMER_EVENT
{
   int64_t count;
   double error;
};

struct _ALLEGRO_TOUCH_EVENT
{
   struct ALLEGRO_DISPLAY *display;
   int id;
   float x, y;
   float dx, dy;
   bool primary;
};

struct _ALLEGRO_USER_EVENT
{
   struct ALLEGRO_USER_EVENT_DESCRIPTOR *__internal__descr;
   intptr_t data1;
   intptr_t data2;
   intptr_t data3;
   intptr_t data4;
};

typedef struct _ALLEGRO_EVENT ALLEGRO_EVENT;

struct _ALLEGRO_TIMEOUT
{
   __uint64_t __pad1__;
   __uint64_t __pad2__;
};

typedef struct _ALLEGRO_DISPLAY ALLEGRO_DISPLAY;
typedef struct _ALLEGRO_TRANSFORM ALLEGRO_TRANSFORM;
typedef struct _ALLEGRO_EVENT_QUEUE ALLEGRO_EVENT_QUEUE;
typedef struct _ALLEGRO_ANY_EVENT ALLEGRO_ANY_EVENT;
typedef struct _ALLEGRO_DISPLAY_EVENT ALLEGRO_DISPLAY_EVENT;
typedef struct _ALLEGRO_JOYSTICK_EVENT ALLEGRO_JOYSTICK_EVENT;
typedef struct _ALLEGRO_KEYBOARD_EVENT ALLEGRO_KEYBOARD_EVENT;
typedef struct _ALLEGRO_MOUSE_EVENT ALLEGRO_MOUSE_EVENT;
typedef struct _ALLEGRO_TIMER_EVENT ALLEGRO_TIMER_EVENT;
typedef struct _ALLEGRO_TOUCH_EVENT ALLEGRO_TOUCH_EVENT;
typedef struct _ALLEGRO_USER_EVENT ALLEGRO_USER_EVENT;
typedef struct _ALLEGRO_TIMEOUT ALLEGRO_TIMEOUT;
typedef struct _ALLEGRO_TIMER ALLEGRO_TIMER;
typedef struct _ALLEGRO_EVENT_SOURCE ALLEGRO_EVENT_SOURCE;
typedef struct _ALLEGRO_DISPLAY ALLEGRO_DISPLAY;
typedef struct _ALLEGRO_JOYSTICK ALLEGRO_JOYSTICK;


struct _ALLEGRO_EVENT
{
   ALLEGRO_EVENT_TYPE type;
   struct _ALLEGRO_DISPLAY_EVENT display;
   struct _ALLEGRO_KEYBOARD_EVENT keyboard;
   struct _ALLEGRO_MOUSE_EVENT mouse;
   struct _ALLEGRO_TIMER_EVENT timer;
   struct _ALLEGRO_TOUCH_EVENT touch;
   struct _ALLEGRO_USER_EVENT user;
   struct _ALLEGRO_JOYSTICK_EVENT joystick;
};

extern bool al_install_system(int version, int (*atexit_ptr)(void (*)(void)));
extern void al_destroy_timer(ALLEGRO_TIMER *timer);
extern ALLEGRO_DISPLAY *al_create_display(int w, int h);
extern void al_destroy_display(ALLEGRO_DISPLAY *display);
extern void al_identity_transform(ALLEGRO_TRANSFORM* trans);
extern void al_rotate_transform(ALLEGRO_TRANSFORM* trans, float theta);
extern void al_translate_transform(ALLEGRO_TRANSFORM* trans, float x, float y);
extern void al_use_transform(const ALLEGRO_TRANSFORM* trans);
extern const ALLEGRO_TRANSFORM* al_get_current_transform(void);
extern ALLEGRO_EVENT_QUEUE* al_create_event_queue(void);
extern void al_wait_for_event(ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT *ret_event);
extern void al_init_timeout(ALLEGRO_TIMEOUT *timeout, double seconds);
extern bool al_wait_for_event_until(ALLEGRO_EVENT_QUEUE *queue, ALLEGRO_EVENT *ret_event, ALLEGRO_TIMEOUT *timeout);
extern ALLEGRO_TIMER* al_create_timer(double speed_secs);
extern void al_register_event_source(ALLEGRO_EVENT_QUEUE*, ALLEGRO_EVENT_SOURCE*);
extern ALLEGRO_EVENT_SOURCE* al_get_display_event_source(ALLEGRO_DISPLAY *display);
extern ALLEGRO_EVENT_SOURCE* al_get_timer_event_source(ALLEGRO_TIMER *timer);
extern void al_start_timer(ALLEGRO_TIMER *timer);
extern bool al_install_keyboard(void);
extern ALLEGRO_EVENT_SOURCE *al_get_keyboard_event_source(void);
extern void al_destroy_event_queue(ALLEGRO_EVENT_QUEUE*);