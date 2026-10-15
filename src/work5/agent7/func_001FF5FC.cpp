typedef unsigned int u32;
typedef float f32;
struct Vec3 { f32 x, y, z; };
struct HitResult { f32 m0; Vec3 m4; Vec3 m10; u32 m1c, m20, m24, m28, m2c; };
struct Cb {
    virtual bool onHit(const HitResult& r);
    u32 pad[0x54 / 4];
    Vec3 m58;
};
bool Cb::onHit(const HitResult& r) {
    if (r.m4.y < 0.1f) m58 = r.m4;
    return true;
}
