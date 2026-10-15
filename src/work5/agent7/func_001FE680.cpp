typedef unsigned int u32;
typedef float f32;
struct Vec3 { f32 x, y, z; };
namespace sead { struct Vector3f { static const Vec3 zero; }; }
struct HitResult {
    f32 m0; Vec3 m4; Vec3 m10; u32 m1c, m20, m24, m28, m2c;
    HitResult();
};
HitResult::HitResult()
    : m0(0.0f), m4(sead::Vector3f::zero), m10(sead::Vector3f::zero), m1c(0), m20(0), m24(0), m28(0), m2c(0) {}
