typedef struct _al_tagbstring ALLEGRO_USTR_INFO;

extern ALLEGRO_USTR *al_ustr_new(const char *s);
extern ALLEGRO_USTR *al_ustr_new_from_buffer(const char *s, size_t size);
extern ALLEGRO_USTR *al_ustr_newf(const char *fmt, ...);
extern void al_ustr_free(ALLEGRO_USTR *us);
extern const char *al_cstr(const ALLEGRO_USTR *us);
extern void al_ustr_to_buffer(const ALLEGRO_USTR *us, char *buffer, int size);
extern char *al_cstr_dup(const ALLEGRO_USTR *us);
extern ALLEGRO_USTR *al_ustr_dup(const ALLEGRO_USTR *us);
extern ALLEGRO_USTR *al_ustr_dup_substr(const ALLEGRO_USTR *us, int start_pos, int end_pos);

extern ALLEGRO_USTR *al_ustr_empty_string(void);

extern ALLEGRO_USTR *al_ref_cstr(ALLEGRO_USTR_INFO *info, const char *s);
extern ALLEGRO_USTR *al_ref_buffer(ALLEGRO_USTR_INFO *info, const char *s, size_t size);
extern ALLEGRO_USTR *al_ref_ustr(ALLEGRO_USTR_INFO *info, const ALLEGRO_USTR *us, int start_pos, int end_pos);

extern size_t al_ustr_size(const ALLEGRO_USTR *us);
extern size_t al_ustr_length(const ALLEGRO_USTR *us);
extern int al_ustr_offset(const ALLEGRO_USTR *us, int index);
extern bool al_ustr_next(const ALLEGRO_USTR *us, int *pos);
extern bool al_ustr_prev(const ALLEGRO_USTR *us, int *pos);

extern int32_t al_ustr_get(const ALLEGRO_USTR *ub, int pos);
extern int32_t al_ustr_get_next(const ALLEGRO_USTR *us, int *pos);
extern int32_t al_ustr_prev_get(const ALLEGRO_USTR *us, int *pos);

extern bool al_ustr_insert(ALLEGRO_USTR *us1, int pos, const ALLEGRO_USTR *us2);
extern bool al_ustr_insert_cstr(ALLEGRO_USTR *us, int pos, const char *s);
extern size_t al_ustr_insert_chr(ALLEGRO_USTR *us, int pos, int32_t c);

extern bool al_ustr_append(ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern bool al_ustr_append_cstr(ALLEGRO_USTR *us, const char *s);
extern size_t al_ustr_append_chr(ALLEGRO_USTR *us, int32_t c);
extern bool al_ustr_appendf(ALLEGRO_USTR *us, const char *fmt, ...);
extern bool al_ustr_vappendf(ALLEGRO_USTR *us, const char *fmt, va_list ap);

extern bool al_ustr_remove_chr(ALLEGRO_USTR *us, int pos);
extern bool al_ustr_remove_range(ALLEGRO_USTR *us, int start_pos, int end_pos);
extern bool al_ustr_truncate(ALLEGRO_USTR *us, int start_pos);
extern bool al_ustr_ltrim_ws(ALLEGRO_USTR *us);
extern bool al_ustr_rtrim_ws(ALLEGRO_USTR *us);
extern bool al_ustr_trim_ws(ALLEGRO_USTR *us);

extern bool al_ustr_assign(ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern bool al_ustr_assign_substr(ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2, int start_pos, int end_pos);
extern bool al_ustr_assign_cstr(ALLEGRO_USTR *us1, const char *s);

extern size_t al_ustr_set_chr(ALLEGRO_USTR *us, int start_pos, int32_t c);
extern bool al_ustr_replace_range(ALLEGRO_USTR *us1, int start_pos1, int end_pos1, const ALLEGRO_USTR *us2);

extern int al_ustr_find_chr(const ALLEGRO_USTR *us, int start_pos, int32_t c);
extern int al_ustr_rfind_chr(const ALLEGRO_USTR *us, int end_pos, int32_t c);
extern int al_ustr_find_set(const ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *accept);
extern int al_ustr_find_set_cstr(const ALLEGRO_USTR *us, int start_pos, const char *accept);
extern int al_ustr_find_cset(const ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *reject);
extern int al_ustr_find_cset_cstr(const ALLEGRO_USTR *us, int start_pos, const char *reject);
extern int al_ustr_find_str(const ALLEGRO_USTR *haystack, int start_pos, const ALLEGRO_USTR *needle);
extern int al_ustr_find_cstr(const ALLEGRO_USTR *haystack, int start_pos, const char *needle);
extern int al_ustr_rfind_str(const ALLEGRO_USTR *haystack, int end_pos, const ALLEGRO_USTR *needle);
extern int al_ustr_rfind_cstr(const ALLEGRO_USTR *haystack, int end_pos, const char *needle);
extern bool al_ustr_find_replace(ALLEGRO_USTR *us, int start_pos, const ALLEGRO_USTR *find, const ALLEGRO_USTR *replace);
extern bool al_ustr_find_replace_cstr(ALLEGRO_USTR *us, int start_pos, const char *find, const char *replace);

extern bool al_ustr_equal(const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern int al_ustr_compare(const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern int al_ustr_ncompare(const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2, int n);
extern bool al_ustr_has_prefix(const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern bool al_ustr_has_prefix_cstr(const ALLEGRO_USTR *us1, const char *s2);
extern bool al_ustr_has_suffix(const ALLEGRO_USTR *us1, const ALLEGRO_USTR *us2);
extern bool al_ustr_has_suffix_cstr(const ALLEGRO_USTR *us1, const char *s2);

extern ALLEGRO_USTR *al_ustr_new_from_utf16(uint16_t const *s);
extern size_t al_ustr_size_utf16(const ALLEGRO_USTR *us);
extern size_t al_ustr_encode_utf16(const ALLEGRO_USTR *us, uint16_t *s, size_t n);

extern size_t al_utf8_width(int c);
extern size_t al_utf8_encode(char s[], int32_t c);

extern size_t al_utf16_width(int c);
extern size_t al_utf16_encode(uint16_t s[], int32_t c);
