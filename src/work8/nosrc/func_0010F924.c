typedef unsigned int u32;
typedef unsigned short u16;
struct S {
    u32 a;  u32 skip0;  u32 b;  u16 c;  u32 d;  u16 e;  u32 f_;
    u32 g;  u32 h;  char skip2[12];  u32 i;  u32 j;
};
void f(struct S* s) {
    s->a = 0; s->b = 0; s->c = 0; s->d = 0; s->e = 0; s->f_ = 0;
    s->g = 0; s->h = (u32)-1; s->i = 0; s->j = 0;
}
