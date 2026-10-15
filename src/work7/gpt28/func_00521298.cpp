#include "range.h"
struct Object521298 { char pad[0x3d0]; Vec3 position; f32 distance(); };
inline f32 distanceXZ(const Vec3& a,const Vec3& b) {
    f32 dx=b.x-a.x;
    f32 dz=b.z-a.z;
    return dx*dx+dz*dz;
}
f32 Object521298::distance() { return distanceXZ(position,*data_0070FB60->position); }
