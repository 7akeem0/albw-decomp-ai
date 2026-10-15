typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct Player { char pad0[0x1c]; Vec3* m1c; };
extern Player* data_0070FB60;
s32 func_00556E00(Player* p);           // 0x556E00
struct C {
    char pad0[2];
    u8 m2;
    void f(const Vec3& v);
};
void C::f(const Vec3& v) {
    if (m2 == 0)
        return;
    Player* p = data_0070FB60;
    if (!p)
        return;
    if (func_00556E00(p) != 0) {
        m2 = 0;
        return;
    }
    Vec3* q = p->m1c;
    f32 dx = v.x - q->x;
    f32 dz = v.z - q->z;
    f32 d = dx * dx + dz * dz;
    if (d > 6.25f)
        m2 = 0;
}
