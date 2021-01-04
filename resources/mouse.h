
#define ALLEGRO_MOUSE_MAX_EXTRA_AXES	 4

struct _ALLEGRO_MOUSE_STATE
{
   /* (x, y) Primary mouse position
    * (z) Mouse wheel position (1D 'wheel'), or,
    * (w, z) Mouse wheel position (2D 'ball')
    * display - the display the mouse is on (coordinates are relative to this)
    * pressure - the pressure applied to the mouse (for stylus/tablet)
    */
   int x;
   int y;
   int z;
   int w;
   int more_axes[4];
   int buttons;
   float pressure;
   struct _ALLEGRO_DISPLAY *display;
};

typedef enum ALLEGRO_SYSTEM_MOUSE_CURSOR
{
   ALLEGRO_SYSTEM_MOUSE_CURSOR_NONE        =  0,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_DEFAULT     =  1,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_ARROW       =  2,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_BUSY        =  3,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_QUESTION    =  4,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_EDIT        =  5,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_MOVE        =  6,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_N    =  7,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_W    =  8,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_S    =  9,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_E    = 10,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NW   = 11,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_SW   = 12,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_SE   = 13,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_RESIZE_NE   = 14,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_PROGRESS    = 15,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_PRECISION   = 16,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_LINK        = 17,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_ALT_SELECT  = 18,
   ALLEGRO_SYSTEM_MOUSE_CURSOR_UNAVAILABLE = 19,
   ALLEGRO_NUM_SYSTEM_MOUSE_CURSORS
} ALLEGRO_SYSTEM_MOUSE_CURSOR;

typedef struct _ALLEGRO_MOUSE_STATE ALLEGRO_MOUSE_STATE;
typedef struct _ALLEGRO_MOUSE_CURSOR ALLEGRO_MOUSE_CURSOR;

extern bool al_install_mouse(void);
extern bool al_is_mouse_installed(void);
extern void al_uninstall_mouse(void);
extern unsigned int al_get_mouse_num_axes(void);
extern unsigned int al_get_mouse_num_buttons(void);
extern void al_get_mouse_state(ALLEGRO_MOUSE_STATE *ret_state);
extern int al_get_mouse_state_axis(const ALLEGRO_MOUSE_STATE *state, int axis);
extern bool al_mouse_button_down(const ALLEGRO_MOUSE_STATE *state, int button);
extern bool al_set_mouse_xy(ALLEGRO_DISPLAY *display, int x, int y);
extern bool al_set_mouse_z(int z);
extern bool al_set_mouse_w(int w);
extern bool al_set_mouse_axis(int which, int value);
extern ALLEGRO_EVENT_SOURCE *al_get_mouse_event_source(void);

extern ALLEGRO_MOUSE_CURSOR *al_create_mouse_cursor(ALLEGRO_BITMAP *bmp, int x_focus, int y_focus);
extern void al_destroy_mouse_cursor(ALLEGRO_MOUSE_CURSOR *cursor);
extern bool al_set_mouse_cursor(ALLEGRO_DISPLAY *display, ALLEGRO_MOUSE_CURSOR *cursor);
extern bool al_set_system_mouse_cursor(ALLEGRO_DISPLAY *display, ALLEGRO_SYSTEM_MOUSE_CURSOR cursor_id);
extern bool al_get_mouse_cursor_position(int *ret_x, int *ret_y);
extern bool al_hide_mouse_cursor(ALLEGRO_DISPLAY *display);
extern bool al_show_mouse_cursor(ALLEGRO_DISPLAY *display);
extern bool al_grab_mouse(ALLEGRO_DISPLAY *display);
extern bool al_ungrab_mouse(void);
