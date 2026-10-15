typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern "C" void func_002E1B70(void*);
extern "C" void func_00115DC8(void*);
extern "C" void* data_00708998;

struct Vec3 { f32 x, y, z; };

struct C {
    u8 pad[0x160];
    Vec3 v;
};

struct B {
    u8 pad[0x18];
    C* m18;
};

struct S {
    u32 m0;
    u8 m4[0x95 - 4];
    u8 m95;
    void f();
};

void S::f() {
    B* g = (B*)data_00708998;
    C* c = g->m18;
    if (c != 0) {
        c->v.y = 1.0f;
        c->v.x = 0.0f;
        c->v.z = 0.0f; __schedule_barrier();
        Vec3* v = &c->v;
        func_00115DC8(v);
    }
    func_002E1B70((u8*)this + 4);
    m95 = 0;
    m0 = 0;
}
