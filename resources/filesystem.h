struct ALLEGRO_FS_ENTRY {
   struct ALLEGRO_FS_INTERFACE const *vtable;
};

typedef struct ALLEGRO_FS_ENTRY ALLEGRO_FS_ENTRY;

typedef struct _ALLEGRO_FS_INTERFACE ALLEGRO_FS_INTERFACE;

extern ALLEGRO_FS_ENTRY *al_create_fs_entry(const char *path);
extern void al_destroy_fs_entry(ALLEGRO_FS_ENTRY *fh);
extern const char *al_get_fs_entry_name(ALLEGRO_FS_ENTRY *e);
extern bool al_update_fs_entry(ALLEGRO_FS_ENTRY *e);
extern uint32_t al_get_fs_entry_mode(ALLEGRO_FS_ENTRY *e);
extern time_t al_get_fs_entry_atime(ALLEGRO_FS_ENTRY *e);
extern time_t al_get_fs_entry_ctime(ALLEGRO_FS_ENTRY *e);
extern time_t al_get_fs_entry_mtime(ALLEGRO_FS_ENTRY *e);
extern off_t al_get_fs_entry_size(ALLEGRO_FS_ENTRY *e);
extern bool al_fs_entry_exists(ALLEGRO_FS_ENTRY *e);
extern bool al_remove_fs_entry(ALLEGRO_FS_ENTRY *e);
extern bool al_filename_exists(const char *path);
extern bool al_remove_filename(const char *path);

extern bool al_open_directory(ALLEGRO_FS_ENTRY *e);
extern ALLEGRO_FS_ENTRY *al_read_directory(ALLEGRO_FS_ENTRY *e);
extern bool al_close_directory(ALLEGRO_FS_ENTRY *e);
extern char *al_get_current_directory(void);
extern bool al_change_directory(const char *path);
extern bool al_make_directory(const char *path);
extern ALLEGRO_FILE *al_open_fs_entry(ALLEGRO_FS_ENTRY *e, const char *mode);

extern void al_set_fs_interface(const ALLEGRO_FS_INTERFACE *fs_interface);
extern void al_set_standard_fs_interface(void);
extern const ALLEGRO_FS_INTERFACE *al_get_fs_interface(void);
