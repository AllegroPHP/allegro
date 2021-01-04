struct _ALLEGRO_MEMORY_INTERFACE {
   void *(*mi_malloc)(size_t n, int line, const char *file, const char *func);
   void (*mi_free)(void *ptr, int line, const char *file, const char *func);
   void *(*mi_realloc)(void *ptr, size_t n, int line, const char *file, const char *func);
   void *(*mi_calloc)(size_t count, size_t n, int line, const char *file, const char *func);
};

typedef struct _ALLEGRO_MEMORY_INTERFACE ALLEGRO_MEMORY_INTERFACE;

extern void *al_malloc_with_context(size_t n, int line, const char *file, const char *func);
extern void al_free_with_context(void *ptr, int line, const char *file, const char *func);
extern void *al_realloc_with_context(void *ptr, size_t n, int line, const char *file, const char *func);
extern void *al_calloc_with_context(size_t count, size_t n, int line, const char *file, const char *func);
extern void al_set_memory_interface(ALLEGRO_MEMORY_INTERFACE *memory_interface);
