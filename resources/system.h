typedef struct _ALLEGRO_PATH ALLEGRO_PATH;
typedef struct _ALLEGRO_CONFIG ALLEGRO_CONFIG;

extern bool al_install_system(int version, int (*atexit_ptr)(void (*)(void)));
extern void al_uninstall_system(void);
extern bool al_is_system_installed(void);
extern uint32_t al_get_allegro_version(void);
extern ALLEGRO_PATH *al_get_standard_path(int id);
extern void al_set_app_name(const char *app_name);
extern void al_set_org_name(const char *org_name);
extern const char *al_get_app_name(void);
extern const char *al_get_org_name(void);
extern ALLEGRO_CONFIG *al_get_system_config(void);
