struct _ALLEGRO_COLOR
{
   float r, g, b, a;
};

typedef struct _ALLEGRO_COLOR ALLEGRO_COLOR;

extern ALLEGRO_COLOR al_map_rgb(unsigned char r, unsigned char g, unsigned char b);
extern ALLEGRO_COLOR al_map_rgb_f(float r, float g, float b);
extern ALLEGRO_COLOR al_map_rgba(unsigned char r, unsigned char g, unsigned char b, unsigned char a);
extern ALLEGRO_COLOR al_map_rgba_f(float r, float g, float b, float a);
extern void al_unmap_rgb(ALLEGRO_COLOR color,unsigned char *r, unsigned char *g, unsigned char *b);
extern void al_unmap_rgb_f(ALLEGRO_COLOR color, float *r, float *g, float *b);
extern void al_unmap_rgba(ALLEGRO_COLOR color, unsigned char *r, unsigned char *g, unsigned char *b, unsigned char *a);
extern void al_unmap_rgba_f(ALLEGRO_COLOR color, float *r, float *g, float *b, float *a);

struct _ALLEGRO_LOCKED_REGION {
   void *data;
   int format;
   int pitch;
   int pixel_size;
};
typedef struct _ALLEGRO_LOCKED_REGION ALLEGRO_LOCKED_REGION;

extern int al_get_pixel_size(int format);
extern int al_get_pixel_format_bits(int format);
extern ALLEGRO_LOCKED_REGION *al_lock_bitmap(ALLEGRO_BITMAP *bitmap, int format, int flags);
extern ALLEGRO_LOCKED_REGION *al_lock_bitmap_region(ALLEGRO_BITMAP *bitmap, int x, int y, int width, int height, int format, int flags);
extern void al_unlock_bitmap(ALLEGRO_BITMAP *bitmap);

extern ALLEGRO_BITMAP *al_create_bitmap(int w, int h);
extern ALLEGRO_BITMAP *al_create_sub_bitmap(ALLEGRO_BITMAP *parent, int x, int y, int w, int h);
extern ALLEGRO_BITMAP *al_clone_bitmap(ALLEGRO_BITMAP *bitmap);
extern void al_destroy_bitmap(ALLEGRO_BITMAP *bitmap);
extern int al_get_new_bitmap_flags(void);
extern int al_get_new_bitmap_format(void);
extern void al_set_new_bitmap_flags(int flags);
extern void al_add_new_bitmap_flag(int flag);
extern void al_set_new_bitmap_format(int format);

extern int al_get_bitmap_flags(ALLEGRO_BITMAP *bitmap);
extern int al_get_bitmap_format(ALLEGRO_BITMAP *bitmap);
extern int al_get_bitmap_height(ALLEGRO_BITMAP *bitmap);
extern int al_get_bitmap_width(ALLEGRO_BITMAP *bitmap);
extern ALLEGRO_COLOR al_get_pixel(ALLEGRO_BITMAP *bitmap, int x, int y);
extern bool al_is_bitmap_locked(ALLEGRO_BITMAP *bitmap);
extern bool al_is_compatible_bitmap(ALLEGRO_BITMAP *bitmap);
extern bool al_is_sub_bitmap(ALLEGRO_BITMAP *bitmap);

extern void al_clear_to_color(ALLEGRO_COLOR color);
extern void al_draw_bitmap(ALLEGRO_BITMAP *bitmap, float dx, float dy, int flags);
extern void al_draw_tinted_bitmap(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float dx, float dy, int flags);
extern void al_draw_bitmap_region(ALLEGRO_BITMAP *bitmap, float sx, float sy, float sw, float sh, float dx, float dy, int flags);
extern void al_draw_tinted_bitmap_region(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, int flags);
extern void al_draw_pixel(float x, float y, ALLEGRO_COLOR color);
extern void al_draw_rotated_bitmap(ALLEGRO_BITMAP *bitmap, float cx, float cy, float dx, float dy, float angle, int flags);
extern void al_draw_tinted_rotated_bitmap(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float angle, int flags);
extern void al_draw_scaled_rotated_bitmap(ALLEGRO_BITMAP *bitmap, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags);
extern void al_draw_tinted_scaled_rotated_bitmap(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float cx, float cy, float dx, float dy, float xscale, float yscale, float angle, int flags);
extern void al_draw_scaled_bitmap(ALLEGRO_BITMAP *bitmap, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags);
extern void al_draw_tinted_scaled_bitmap(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR tint, float sx, float sy, float sw, float sh, float dx, float dy, float dw, float dh, int flags);
extern ALLEGRO_BITMAP *al_get_target_bitmap(void);
extern void al_put_pixel(int x, int y, ALLEGRO_COLOR color);
extern void al_put_blended_pixel(int x, int y, ALLEGRO_COLOR color);
extern void al_set_target_bitmap(ALLEGRO_BITMAP *bitmap);
extern void al_set_target_backbuffer(ALLEGRO_DISPLAY *display);
extern ALLEGRO_DISPLAY *al_get_current_display(void);

extern void al_get_blender(int *op, int *src, int *dst);
extern void al_get_separate_blender(int *op, int *src, int *dst, int *alpha_op, int *alpha_src, int *alpha_dst);
extern void al_set_blender(int op, int src, int dst);
extern void al_set_separate_blender(int op, int src, int dst, int alpha_op, int alpha_src, int alpha_dst);

extern void al_get_clipping_rectangle(int *x, int *y, int *w, int *h);
extern void al_set_clipping_rectangle(int x, int y, int width, int height);

extern void al_convert_mask_to_alpha(ALLEGRO_BITMAP *bitmap, ALLEGRO_COLOR mask_color);

extern void al_hold_bitmap_drawing(bool hold);
extern bool al_is_bitmap_drawing_held(void);

extern bool al_register_bitmap_loader(const char *extension, ALLEGRO_BITMAP *(*loader)(const char *filename));
extern bool al_register_bitmap_saver(const char *extension, bool (*saver)(const char *filename, ALLEGRO_BITMAP *bmp));
extern bool al_register_bitmap_loader_f(const char *extension, ALLEGRO_BITMAP *(*loader_f)(ALLEGRO_FILE *fp));
extern bool al_register_bitmap_saver_f(const char *extension, bool (*saver_f)(ALLEGRO_FILE *fp, ALLEGRO_BITMAP *bmp));
extern ALLEGRO_BITMAP *al_load_bitmap(const char *filename);
extern ALLEGRO_BITMAP *al_load_bitmap_f(ALLEGRO_FILE *fp, const char *ident);
extern bool al_save_bitmap(const char *filename, ALLEGRO_BITMAP *bitmap);
extern bool al_save_bitmap_f(ALLEGRO_FILE *fp, const char *ident, ALLEGRO_BITMAP *bitmap);
