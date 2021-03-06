typedef struct _ALLEGRO_TRANSFORM ALLEGRO_TRANSFORM;

struct _ALLEGRO_TRANSFORM {
   float m[4][4];
};

void al_copy_transform(ALLEGRO_TRANSFORM *dest, const ALLEGRO_TRANSFORM *src);
void al_use_transform(const ALLEGRO_TRANSFORM *trans);
const ALLEGRO_TRANSFORM *al_get_current_transform(void);
void al_invert_transform(ALLEGRO_TRANSFORM *trans);
int al_check_inverse(const ALLEGRO_TRANSFORM *trans, float tol);
void al_identity_transform(ALLEGRO_TRANSFORM *trans);
void al_build_transform(ALLEGRO_TRANSFORM *trans, float x, float y, float sx, float sy, float theta);
void al_translate_transform(ALLEGRO_TRANSFORM *trans, float x, float y);
void al_rotate_transform(ALLEGRO_TRANSFORM *trans, float theta);
void al_scale_transform(ALLEGRO_TRANSFORM *trans, float sx, float sy);
void al_transform_coordinates(const ALLEGRO_TRANSFORM *trans, float *x, float *y);
void al_compose_transform(ALLEGRO_TRANSFORM *trans, const ALLEGRO_TRANSFORM *other);