typedef unsigned char u8; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Kind { u8 m0; u8 m1; };
struct Msg { u8 pad[0x10]; Vec3 m10; u8 pad1c[0x28 - 0x1c]; u32 m28; Kind* m2c; };
struct Actor;
struct Obj;
s32 func_004F81F0(void* p);
void func_0053A440(Obj* o, Vec3* out, u32* h, s32 k, Vec3* pos);
Actor* func_0052FBA0(void* mgr, u32 h);
s32 func_00588BE4(Actor* a);
Vec3* func_00520FC0(Obj* o);
void func_00115C70(Vec3* out, const Vec3* a, const Vec3* b);
s32 func_0068C690(const Vec3& v);
void func_001882B0(Actor* a, s32 ang, f32 r);
void func_004F7E8C(Obj* o, Msg* m);
extern "C" char* data_00706E20;
extern "C" const s32 ro_00693218;
s32 angleValue(Vec3 v) { return func_0068C690(v); }
inline Vec3 operator-(const Vec3& a, const Vec3& b) { Vec3 r; func_00115C70(&r, &a, &b); return r; }
struct Obj {
    u8 pad[0x3d0]; Vec3 m3d0; u8 pad3dc[0x430 - 0x3dc]; void* m430; void* m434; u8 pad438[0x4b5 - 0x438]; u8 m4b5;
    void f(Msg* m);
};
void Obj::f(Msg* m) {
    if (func_004F81F0(m4b5 == 0 ? m430 : m434) == 7 && m->m2c != 0) {
        Vec3 tmp;
        func_0053A440(this, (Vec3*)&tmp, &m->m28, 0xf, &m->m10);
        if (m->m2c->m1 == 0xf) {
            Actor* a = func_0052FBA0(data_00706E20 + 0x3dbbc, m->m28);
            if (a && func_00588BE4(a) == ro_00693218) {
                Actor * a_c54 = a;
                func_001882B0(a_c54, angleValue(*func_00520FC0(this) - m3d0), 0.8f);
            }
        }
    }
    func_004F7E8C(this, m);
}
