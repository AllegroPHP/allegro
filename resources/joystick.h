#define _AL_MAX_JOYSTICK_AXES	   3
#define _AL_MAX_JOYSTICK_STICKS    16
#define _AL_MAX_JOYSTICK_BUTTONS   32

struct _ALLEGRO_JOYSTICK_STATE
{
   struct {
      float axis[3];        /* -1.0 to 1.0 */
   } stick[16];
   int button[32];        /* 0 to 32767 */
};

typedef struct _ALLEGRO_JOYSTICK_STATE ALLEGRO_JOYSTICK_STATE;

extern bool al_install_joystick(void);
extern void al_uninstall_joystick(void);
extern bool al_is_joystick_installed(void);
extern bool al_reconfigure_joysticks(void);
extern int al_get_num_joysticks(void);
extern ALLEGRO_JOYSTICK * al_get_joystick(int num);
extern void al_release_joystick(ALLEGRO_JOYSTICK *joy);
extern bool al_get_joystick_active(ALLEGRO_JOYSTICK *joy);
extern const char *al_get_joystick_name(ALLEGRO_JOYSTICK *joy);
extern const char *al_get_joystick_stick_name(ALLEGRO_JOYSTICK *joy, int stick);
extern const char *al_get_joystick_axis_name(ALLEGRO_JOYSTICK *joy, int stick, int axis);
extern const char *al_get_joystick_button_name(ALLEGRO_JOYSTICK *joy, int button);
extern int al_get_joystick_stick_flags(ALLEGRO_JOYSTICK *joy, int stick);
extern int al_get_joystick_num_sticks(ALLEGRO_JOYSTICK *joy);
extern int al_get_joystick_num_axes(ALLEGRO_JOYSTICK *joy, int stick);
extern int al_get_joystick_num_buttons(ALLEGRO_JOYSTICK *joy);
extern void al_get_joystick_state(ALLEGRO_JOYSTICK *joy, ALLEGRO_JOYSTICK_STATE *ret_state);
extern ALLEGRO_EVENT_SOURCE *al_get_joystick_event_source(void);
