typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* data_00708998;
extern "C" u32 func_00144AE0(void*);

struct C {
    u8 pad[0x10c];
    s32 m10c;
};

struct B {
    u8 pad[0x18];
    C* m18;
};

struct S {
    u8 pad0[0x7c8];
    u8 m7c8;
    u8 m7c9;
    u8 m7ca;
    void f();
};

void S::f() {
    B* g = (B*)data_00708998;
    if (g != 0) {
        C* p = g->m18;
        if (p != 0 && p->m10c >= 0) return;
    }
    if (m7c8 == 0xff) return;
    if (func_00144AE0(this) != 0) m7ca = 1;
}
