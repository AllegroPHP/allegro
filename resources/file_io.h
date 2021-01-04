
struct _al_tagbstring {
	int mlen;
	int slen;
	unsigned char * data;
};

typedef struct _ALLEGRO_FILE ALLEGRO_FILE;
typedef struct _ALLEGRO_FILE_INTERFACE ALLEGRO_FILE_INTERFACE;

typedef struct _al_tagbstring ALLEGRO_USTR;

extern ALLEGRO_FILE *al_fopen(const char *path, const char *mode);
extern ALLEGRO_FILE *al_fopen_interface(const ALLEGRO_FILE_INTERFACE *drv, const char *path, const char *mode);
extern void al_fclose(ALLEGRO_FILE *f);
extern size_t al_fread(ALLEGRO_FILE *f, void *ptr, size_t size);
extern size_t al_fwrite(ALLEGRO_FILE *f, const void *ptr, size_t size);
extern bool al_fflush(ALLEGRO_FILE *f);
extern int64_t al_ftell(ALLEGRO_FILE *f);
extern bool al_fseek(ALLEGRO_FILE *f, int64_t offset, int whence);
extern bool al_feof(ALLEGRO_FILE *f);
extern bool al_ferror(ALLEGRO_FILE *f);
extern void al_fclearerr(ALLEGRO_FILE *f);
extern int al_fungetc(ALLEGRO_FILE *f, int c);
extern int64_t al_fsize(ALLEGRO_FILE *f);
extern int al_fgetc(ALLEGRO_FILE *f);
extern int al_fputc(ALLEGRO_FILE *f, int c);
extern int16_t al_fread16le(ALLEGRO_FILE *f);
extern int16_t al_fread16be(ALLEGRO_FILE *f);
extern size_t al_fwrite16le(ALLEGRO_FILE *f, int16_t w);
extern size_t al_fwrite16be(ALLEGRO_FILE *f, int16_t w);
extern int32_t al_fread32le(ALLEGRO_FILE *f);
extern int32_t al_fread32be(ALLEGRO_FILE *f);
extern size_t al_fwrite32le(ALLEGRO_FILE *f, int32_t l);
extern size_t al_fwrite32be(ALLEGRO_FILE *f, int32_t l);
extern char *al_fgets(ALLEGRO_FILE *f, char * const buf, size_t max);
extern ALLEGRO_USTR *al_fget_ustr(ALLEGRO_FILE *f);
extern int al_fputs(ALLEGRO_FILE *f, char const *p);

extern ALLEGRO_FILE *al_fopen_fd(int fd, const char *mode);
extern ALLEGRO_FILE *al_make_temp_file(const char *template, ALLEGRO_PATH **ret_path);

extern void al_set_new_file_interface(const ALLEGRO_FILE_INTERFACE *file_interface);
extern void al_set_standard_file_interface(void);
extern const ALLEGRO_FILE_INTERFACE *al_get_new_file_interface(void);
extern ALLEGRO_FILE *al_create_file_handle(const ALLEGRO_FILE_INTERFACE *drv, void *userdata);
extern void *al_get_file_userdata(ALLEGRO_FILE *f);
