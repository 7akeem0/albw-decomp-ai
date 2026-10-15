#include "../a5.h"
struct Vec3s {
    f32 x, y, z;
    void set(const Vec3s& o) { x = o.x; y = o.y; z = o.z; }
};
struct Sub6E4 {
    void init(const Vec3s& pos);
    void* m0;
    Vec3s m4;
    u32 m10;
    u32 m14;   // angle 0x40000000 (90 deg)
    u32 m18;   // angle 0x38E38E3 (5 deg)
};
void Sub6E4::init(const Vec3s& pos) {
    m14 = 0x40000000;
    m18 = 0x38E38E3;
    m4.set(pos);
}
