typedef int32_t al_fixed;

extern al_fixed al_itofix(int x);
extern int al_fixtoi(al_fixed x);
extern int al_fixfloor(al_fixed x);
extern int al_fixceil(al_fixed x);
extern al_fixed al_ftofix(double x);
extern double al_fixtof(al_fixed x);
extern al_fixed al_fixmul(al_fixed x, al_fixed y);
extern al_fixed al_fixdiv(al_fixed x, al_fixed y);
extern al_fixed al_fixadd(al_fixed x, al_fixed y);
extern al_fixed al_fixsub(al_fixed x, al_fixed y);

const al_fixed al_fixtorad_r = (al_fixed)1608;
const al_fixed al_radtofix_r = (al_fixed)2670177;

extern al_fixed al_fixsin(al_fixed x);
extern al_fixed al_fixcos(al_fixed x);
extern al_fixed al_fixtan(al_fixed x);
extern al_fixed al_fixasin(al_fixed x);
extern al_fixed al_fixacos(al_fixed x);
extern al_fixed al_fixatan(al_fixed x);
extern al_fixed al_fixatan2(al_fixed y, al_fixed x);
extern al_fixed al_fixsqrt(al_fixed x);
extern al_fixed al_fixhypot(al_fixed x, al_fixed y);
