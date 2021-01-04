typedef struct ALLEGRO_DISPLAY_MODE
{
   int width;
   int height;
   int format;
   int refresh_rate;
};

typedef struct _ALLEGRO_MONITOR_INFO
{
   int x1;
   int y1;
   int x2;
   int y2;
};

typedef struct _ALLEGRO_DISPLAY_MODE ALLEGRO_DISPLAY_MODE;
typedef struct _ALLEGRO_MONITOR_INFO ALLEGRO_MONITOR_INFO;

extern ALLEGRO_DISPLAY *al_create_display(int w, int h);
extern void al_destroy_display(ALLEGRO_DISPLAY *display);
extern int al_get_new_display_flags(void);
extern int al_get_new_display_refresh_rate(void);
extern void al_get_new_window_position(int *x, int *y);
extern void al_set_new_display_option(int option, int value, int importance);
extern int al_get_new_display_option(int option, int *importance);
extern void al_reset_new_display_options(void);
extern void al_set_new_display_flags(int flags);
extern void al_set_new_display_refresh_rate(int refresh_rate);
extern void al_set_new_window_position(int x, int y);

extern bool al_acknowledge_resize(ALLEGRO_DISPLAY *display);
extern void al_flip_display(void);
extern ALLEGRO_BITMAP *al_get_backbuffer(ALLEGRO_DISPLAY *display);
extern int al_get_display_flags(ALLEGRO_DISPLAY *display);
extern int al_get_display_format(ALLEGRO_DISPLAY *display);
extern int al_get_display_height(ALLEGRO_DISPLAY *display);
extern int al_get_display_refresh_rate(ALLEGRO_DISPLAY *display);
extern int al_get_display_width(ALLEGRO_DISPLAY *display);
extern void al_get_window_position(ALLEGRO_DISPLAY *display, int *x, int *y);
extern bool al_inhibit_screensaver(bool inhibit);
extern bool al_resize_display(ALLEGRO_DISPLAY *display, int width, int height);
extern void al_set_display_icon(ALLEGRO_DISPLAY *display, ALLEGRO_BITMAP *icon);
extern int al_get_display_option(ALLEGRO_DISPLAY *display, int option);
extern void al_set_window_position(ALLEGRO_DISPLAY *display, int x, int y);
extern void al_set_window_title(ALLEGRO_DISPLAY *display, const char *title);
extern void al_update_display_region(int x, int y, int width, int height);
extern bool al_wait_for_vsync(void);
extern ALLEGRO_EVENT_SOURCE *al_get_display_event_source(ALLEGRO_DISPLAY *display);

extern ALLEGRO_DISPLAY_MODE *al_get_display_mode(int index, ALLEGRO_DISPLAY_MODE *mode);
extern int al_get_num_display_modes(void);

extern int al_get_new_display_adapter(void);
extern void al_set_new_display_adapter(int adapter);
extern bool al_get_monitor_info(int adapter, ALLEGRO_MONITOR_INFO *info);
extern int al_get_num_video_adapters(void);
