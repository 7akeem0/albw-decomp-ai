// 0x1D41D4 MATCH vfunc: count up m47c to m480; when done or (event kind 2..5/22..23 and 0x14EEC8 hit) or (m450 && *m450) -> m2d7 = 1
typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) { x = a; z = c; y = b; } };
namespace sead { struct Vector3f { static const Vec3 zero; }; }
struct EventState { char pad[0x18]; s8 m18; };
extern EventState* data_00709DF8;
struct Obj450 { u32 m0; };
struct A3;
struct Ctr { u32 cur; u32 max; bool step() { Ctr c = *this; if (c.cur < c.max) { cur = c.cur + 1; return true; } return false; } };
bool func_0014EEC8(A3* a, const Vec3& p, const Vec3& ofs, u32 id);
struct A3 {
    char pad0[0x2d7];
    u8 m2d7;
    char pad2d8[0x450 - 0x2d8];
    Obj450* m450;
    char pad454[0x47c - 0x454];
    Ctr m47c;
    char pad484[0x48d - 0x484];
    u8 m48d;
    void func_001D41D4();
};
void A3::func_001D41D4() {
    if (m47c.step()) {
        if (m48d == 0 && ((u32)(data_00709DF8->m18 - 2) <= 3 || (u32)(data_00709DF8->m18 - 22) <= 1)) {
            Vec3 p = sead::Vector3f::zero;
            if (func_0014EEC8(this, p, Vec3(0.0f, 0.3f, 0.0f), 0xddf)) {
                m2d7 = 1;
                return;
            }
        }
        if (m450 && m450->m0) m2d7 = 1;
        return;
    }
    m2d7 = 1;
}
