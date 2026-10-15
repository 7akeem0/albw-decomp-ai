#define A1E4_EXTRA bool func_001E4A5C(s32 a, const Vec3* pos);
#define A1D2_EXTRA bool func_001D2718(s32 a, const Vec3* pos);
struct Vec3;
#include "a2_1d2.h"

// MATCH: one call per arm (a single call with a ?: argument computes the arg first and adds a nop)
bool Actor1D2::func_001D2718(s32 a, const Vec3* pos) {
    if (func_001E4A5C(a, pos)) {
        if (pos->x == 0.0f && pos->y == 0.0f && pos->z == 0.0f)
            m4FC.changeState(0);
        else
            m4FC.changeState(6);
        return true;
    }
    return false;
}
