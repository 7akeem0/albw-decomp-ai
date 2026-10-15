

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" f32 func_0059163C(f32);
extern "C" f32 func_005909A0(f32);
extern "C" f32 func_00591804(f32);
struct Obj {
    u8 pad0[4];
    u8 m4;
    u8 pad5[0x94 - 5];
    f32 m94;
    f32 m98;
    f32 m9c;
    f32 ma0;
    f32 ma4;
    f32 ma8;
    f32 mac;
    void f(f32 a, f32 b, f32 c, f32 d);
};
void Obj::f(f32 a, f32 b, f32 c, f32 d) {
    m94 = a;
    m98 = b; f32 half=0.5f; m4 = 1;
    __schedule_barrier();
    m9c = c;
    f32 h = c * half;
    ma0 = func_0059163C(h);
    ma4 = func_005909A0(h);
    ma8 = func_00591804(h);
    m4 = 1; __schedule_barrier();
    mac = d;
}
