

typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern "C" f32 func_00275FEC(void*, void*, void*, void*);
extern void* data_0070C8E0;
struct Vec3 { f32 x, y, z; };
f32 f_0054E460(void* u, Vec3* p, f32 a, f32 b, void* c) {
    if (data_0070C8E0 == 0) return p->y;
    Vec3 A = *p;
    A.y = A.y + a;
    Vec3 B = *p;
    B.y = B.y - b;
    return func_00275FEC(data_0070C8E0, &A, &B, c);
}
