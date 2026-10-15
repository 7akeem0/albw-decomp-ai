typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

extern "C" void func_00115154(f32*, f32*, u32);

struct S {
    u8 pad[0x3dc];
    f32 m3dc;
    f32 m3e0;
    f32 m3e4;
    void f(f32 f, u32 idx);
};

void S::f(f32 f, u32 idx) {
    f32 z = 0.0f;
    f32 cos = z;
    f32 sin = z;
    func_00115154(&sin, &cos, idx);
    f32 y = z;
    f32 zz = f * cos;
    f32 x = f * sin;
    m3dc = x; __schedule_barrier();
    m3e0 = y;
    m3e4 = zz;
}
