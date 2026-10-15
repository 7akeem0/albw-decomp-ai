#include "ds2.h"
extern void func_0014E138(void*);
extern void* data_0070FB60;
extern s32 func_00556E64(void*);
extern void func_003521F0(void*, s32);
extern void* data_0070B960;
extern void* func_0051E92C(void*);
extern void func_00115CA8(void*, void*, void*);
struct Vec3s { f32 x, y, z; };
void func_001E2778(void* self) {
    func_0014E138(self);
    void* p = data_0070FB60;
    s32 r1 = (p != 0 && func_00556E64(p) != 0) ? 1 : 0;
    func_003521F0((char*)self + 0x324, r1);
    char* dst = (char*)self + 0x3d0;
    Vec3s v;
    v.x = 0.0f;
    v.y = 0.0f;
    v.z = -1.0f;
    void* q = func_0051E92C(data_0070B960);
    func_00115CA8(dst, q, &v);
}
