typedef unsigned int u32;
typedef unsigned char u8;
typedef float f32;

struct Vec2 { f32 x, y; };
struct Inner { u8 pad[0x2cc]; u32 m2cc; };
struct Obj { u8 pad[0x28]; Inner* m28; };
struct Tmp { u8 buf[0x34]; };

extern "C" void func_00377220(void*, u32, u32, u32, f32);
extern "C" void func_005465D0(void*, void*, u32, f32, f32);

void f(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    func_00377220(&tmp, self->m28->m2cc, 0, 0, 0.4f);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}

// g: named constant
void g(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    f32 c = 0.4f;
    func_00377220(&tmp, self->m28->m2cc, 0, 0, c);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}

// h: named zero
void h(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    u32 z = 0;
    func_00377220(&tmp, self->m28->m2cc, z, z, 0.4f);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}

// i: named m2cc
void i(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    u32 id = self->m28->m2cc;
    func_00377220(&tmp, id, 0, 0, 0.4f);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}

// j: (f32)0.4
void j(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    func_00377220(&tmp, self->m28->m2cc, 0, 0, (f32)0.4);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}

extern "C" void funcA(void*, u32, u32, f32, u32);
extern "C" void funcB(void*, u32, f32, u32, u32);
extern "C" void funcC(void*, f32, u32, u32, u32);

void k(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    funcA(&tmp, self->m28->m2cc, 0, 0.4f, 0);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}
void l(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    funcB(&tmp, self->m28->m2cc, 0.4f, 0, 0);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}
void m(Obj* self, u32 arg, Vec2 v) {
    Tmp tmp;
    funcC(&tmp, 0.4f, self->m28->m2cc, 0, 0);
    func_005465D0(self, &tmp, arg, v.x, v.y);
}
