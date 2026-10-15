
extern "C" float func_00111EA8(void*, float);
struct S {
float a;
float b;
void* c;
unsigned int d;
};
struct Cls {
    char pad[0xb4];
    S m;
    void f(float x, void* p);
};
void Cls::f(float x, void* p) {
    S* s = &m;
    if (x < 0.0f) x = 0.0f;
    float c = x;
    float r = func_00111EA8(s, x);
    if (p) { s->a = r;
    s->b = c; } else { s->a = r;
    s->b = c; }
__schedule_barrier();
    s->c = p;
    s->d = 0;
}
