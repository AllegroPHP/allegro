typedef struct _ALLEGRO_CONFIG_SECTION ALLEGRO_CONFIG_SECTION;
typedef struct _ALLEGRO_CONFIG_ENTRY ALLEGRO_CONFIG_ENTRY;

extern ALLEGRO_CONFIG *al_create_config(void);
extern void al_destroy_config(ALLEGRO_CONFIG *config);
extern ALLEGRO_CONFIG *al_load_config_file(const char *filename);
extern ALLEGRO_CONFIG *al_load_config_file_f(ALLEGRO_FILE *file);
extern bool al_save_config_file(const char *filename, const ALLEGRO_CONFIG *config);
extern bool al_save_config_file_f(ALLEGRO_FILE *file, const ALLEGRO_CONFIG *config);
extern void al_add_config_section(ALLEGRO_CONFIG *config, const char *name);
extern void al_add_config_comment(ALLEGRO_CONFIG *config, const char *section, const char *comment);
extern const char *al_get_config_value(const ALLEGRO_CONFIG *config, const char *section, const char *key);
extern void al_set_config_value(ALLEGRO_CONFIG *config, const char *section, const char *key, const char *value);
extern char const *al_get_first_config_section(ALLEGRO_CONFIG const *config, ALLEGRO_CONFIG_SECTION **iterator);
extern char const *al_get_next_config_section(ALLEGRO_CONFIG_SECTION **iterator);
extern char const *al_get_first_config_entry(ALLEGRO_CONFIG const *config, char const *section, ALLEGRO_CONFIG_ENTRY **iterator);
extern char const *al_get_next_config_entry(ALLEGRO_CONFIG_ENTRY **iterator);
extern ALLEGRO_CONFIG *al_merge_config(const ALLEGRO_CONFIG *cfg1, const ALLEGRO_CONFIG *cfg2);
extern void al_merge_config_into(ALLEGRO_CONFIG *master, const ALLEGRO_CONFIG *add);
