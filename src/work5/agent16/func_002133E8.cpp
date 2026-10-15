typedef unsigned char u8;
typedef float f32;
struct En { char p[0x8c0]; u8 m8c0; f32 f(); };
f32 En::f() {
    if (m8c0 == 7) return 0.0f;
    return 1.0f;
}
