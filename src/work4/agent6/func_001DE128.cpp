#include "a6.h"
struct Cls {
    bool damage(s32 delta, s32 b, bool c);  // 0x1DE134
};
struct ClsOwner {
    bool damage(s32 delta, s32 b);
    char pad[0x10];
    Cls* m10;
};
// 0x1DE128: tail call into 0x1DE134 (armlink --branchnop turned 'b' into 'mov r0,r0')
bool ClsOwner::damage(s32 delta, s32 b) {
    return m10->damage(delta, b, true);
}
