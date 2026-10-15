typedef unsigned char u8; typedef unsigned int u32; typedef signed int s32; typedef float f32;
struct Vec3 { float x, y, z; void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; }

};
namespace sead { struct Random { u32 getU32();
f32 getF32() { return getU32() * (1.0f / 4294967296.0f); } f32 getF32(f32 m);  f32 getF32Range(f32 a, f32 b) { return getF32(b - a) + a; }
}; }
f32 sead::Random::getF32(f32 m) { return getF32() * m; }
struct Actor;
sead::Random* func_0058A7D4(Actor* a);
s32 func_0068C690(const Vec3* v);
void func_00115C70(Vec3* o, const Vec3* a, const Vec3* b); static void sub(Vec3* o, const Vec3& a, const Vec3& b) { func_00115C70(o, &a, &b); }
void func_0065650C(void* p, s32 n);
struct G70FB60 { char _0[0x1c]; Vec3* m1C; };
extern G70FB60* data_0070FB60;
struct Obj123FBC {
    char _0[8]; Vec3 m8; char _14[0x3d0 - 0x14]; Vec3 m3d0; char _3dc[0x8bc - 0x3dc];
    char m8bc[0x24]; Vec3 m8e0; s32 m8ec; s32 _8f0; s32 m8f4;
};
void func_00123FBC(Obj123FBC* self) {
    Vec3 v;
    if (self->m8f4 == 0) {
        v.set(*data_0070FB60->m1C);
    } else if (self->m8f4 == 1 || self->m8f4 == 2) {
        v.set(self->m8);
        v.x = func_0058A7D4((Actor*)self)->getF32Range(v.x - 4.0f, v.x + 4.0f);
        v.z = func_0058A7D4((Actor*)self)->getF32Range(v.z - 4.0f, v.z + 4.0f);
    }
    sub(&self->m8e0, v, self->m3d0);
    u32 t = ((u32)func_0068C690(&self->m8e0) + 0x20000000u) >> 30;
    self->m8ec = t << 30;
    func_0065650C(self->m8bc, 2);
}
