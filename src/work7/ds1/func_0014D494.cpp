typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void* data_00712450;
extern "C" u32 func_00520B48(void*);

struct T {
    u8 pad[0xd];
    u8 m0d;
    u8 m0e;
};

struct S {
    u8 pad[0x18];
    T* m18;
    void f();
};

void S::f() {
    if (m18 == 0) return;
    if (m18->m0d != 0) return;
    if (m18->m0e != 0) return;
    if (func_00520B48(data_00712450) != 0) return;
    T* q = m18;
    q->m0e = 1;
}
