typedef unsigned int u32;
typedef unsigned char u8;

struct X {
    char p0[0x0c];
    u8 m0c;
    u8 m0d;
    char p1[0x0f - 0x0e];
    u8 m0f;
    char p2[0x50 - 0x10];
    char m50[0x64 - 0x50];
    u32 m64;
    char p3[0xa2 - 0x68];
    u8 ma2;
};
struct Sec {
    char p0[1];
};

u32 func_00414FF0(u32 b);
void func_00111EE4(u32 v, void* p);

extern "C" void func_0058F108(Sec* o, u32 a, u32 b) {
    X* x = (X*)((char*)o - 0x44);
    if (x->m0c == 0) return;
    if (a > x->m64) return;
    if (x->m64 > b) return;
    x->m0f = 1;
    if (x->ma2 != 0) {
        u32 v = func_00414FF0(1);
        func_00111EE4(v, x->m50);
        x->ma2 = 0;
    }
    if (x->m0d != 0) x->m0d = 0;
}
