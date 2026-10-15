#include "range.h"
struct Vec2 { f32 x, y; };
struct Owner {
    u8 pad0[0x3c];
    f32 m3c;
    f32 m40;
    u8 pad1[0x47 - 0x44];
    u8 m47;
    Vec2 f() const;
};
Vec2 Owner::f() const {
    Vec2 r;
    r.x = 0.0f;
    r.y = 0.0f;
    u8 m = m47;
    u32 a = m & 3;
    if (a == 0) {
        r.x = m3c * -0.5f;
    } else if (a == 2) {
        r.x = -m3c;
    }
    u32 b = ((u32)m << 28) >> 30;
    if (b == 0) {
        r.y = m40 * 0.5f;
    } else if (b == 2) {
        r.y = m40;
    }
    return r;
}
