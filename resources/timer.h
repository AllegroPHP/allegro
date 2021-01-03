extern ALLEGRO_TIMER* al_create_timer(double speed_secs);
extern void al_start_timer(ALLEGRO_TIMER *timer);
extern void al_stop_timer(ALLEGRO_TIMER *timer);
extern bool al_get_timer_started(const ALLEGRO_TIMER *timer);
extern void al_destroy_timer(ALLEGRO_TIMER *timer);
extern int64_t al_get_timer_count(const ALLEGRO_TIMER *timer);
extern void al_set_timer_count(ALLEGRO_TIMER *timer, int64_t new_count);
extern void al_add_timer_count(ALLEGRO_TIMER *timer, int64_t diff);
extern double al_get_timer_speed(const ALLEGRO_TIMER *timer);
extern void al_set_timer_speed(ALLEGRO_TIMER *timer, double new_speed_secs);
extern ALLEGRO_EVENT_SOURCE *al_get_timer_event_source(ALLEGRO_TIMER *timer);