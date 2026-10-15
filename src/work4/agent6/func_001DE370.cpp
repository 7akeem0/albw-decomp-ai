#include "a6.h"
struct Vec3 { f32 x, y, z; };
struct Cls {
    void setPos(const Vec3& pos, u32 w);  // 0x1DE378
};
struct ClsOwner {
    void setPos(const Vec3& pos, u32 w);
    char pad[0x10];
    Cls* m10;
};
// 0x1DE370: tail call into 0x1DE378 (armlink placed the callee right after and turned 'b' into a nop)
void ClsOwner::setPos(const Vec3& pos, u32 w) {
    m10->setPos(pos, w);
}
