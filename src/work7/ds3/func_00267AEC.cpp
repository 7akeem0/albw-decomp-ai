#include "ds3.h"
void func_00115C70(Vec3* out, const Vec3& a, const Vec3& b);
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, a, b); return r; }
s32 func_0068C690(const Vec3& v);
void func_004FABDC(void*, s32, s32, s32);
struct S267AEC { char pad[0x3d0]; Vec3 m3d0; char pad2[0x3e8-0x3dc]; s32 m3e8;
                 char pad3[0x974-0x3ec]; s32 m974; char pad4[0x984-0x978]; Vec3 m984; };
void func_00267AEC(S267AEC* self) {
    Vec3 d = self->m984 - self->m3d0;
    s32 ang = func_0068C690(d);
    self->m974 = ang;
    func_004FABDC(self, (ang - self->m3e8) > 0 ? 1 : 2, -1, 0);
}
