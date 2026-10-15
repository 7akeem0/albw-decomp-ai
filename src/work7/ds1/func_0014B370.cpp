typedef unsigned char u8;
typedef signed char s8;
typedef signed int s32;

extern "C" void func_002C2FFC(void*);
extern "C" void func_0016B6A4(void*);
extern "C" void func_0014A310(void*);
extern "C" void func_0026E024(void*);
extern "C" void* data_0070BBD8;
extern "C" void* data_0070BB18;
extern "C" void* data_0070B800;

struct S {
    u8 pad[0x1bc];
    void* m1bc;
    u8 pad2[0x210 - 0x1c0];
    u8 m210;
    void f();
};

void S::f() {
    void* g1 = data_0070BBD8;
    if (g1) func_002C2FFC(g1);
    void* g2 = data_0070BB18;
    if (g2) {
        if (m210 <= 0) func_0016B6A4(g2);
    }
    if (m1bc) func_0014A310(m1bc);
    void* g3 = data_0070B800;
    if (g3) func_0026E024(g3);
}
