extern bool al_install_keyboard(void);
extern bool al_is_keyboard_installed(void);
extern void al_uninstall_keyboard(void);
extern void al_get_keyboard_state(ALLEGRO_KEYBOARD_STATE *ret_state);
extern bool al_key_down(const ALLEGRO_KEYBOARD_STATE *state, int keycode);
extern const char *al_keycode_to_name(int keycode);
extern bool al_set_keyboard_leds(int leds);
extern ALLEGRO_EVENT_SOURCE *al_get_keyboard_event_source(void);
