typedef unsigned short u16; typedef unsigned int u32; typedef int s32; typedef float f32;
struct Q { f32 m0; f32 m4; };
static inline f32 Abs(f32 v) { return v > 0.0f ? v : -v; }
extern "C" bool func_005895C4(const u16* a, const Q* q, bool flag) {
    u32 v = *a;
    u32 kind = v & 0x1f;
    switch (kind) {
    case 0: case 1: case 2: return true;
    case 5: case 6: return false;
    case 7: {
        u32 sub = (v & 0x7e0) >> 5;
        if (sub != 12 && sub != 11 && sub != 6 && sub != 16) return false;
        break;
    }
    }
    const f32 lim = 0.995f;
    if (!flag) return q->m4 > lim;
    if (kind == 7) {
        u32 sub = (v & 0x7e0) >> 5;
        if (sub == 12 || sub == 11 || sub == 6) return q->m4 > lim;
    }
    return Abs(q->m4) >= 0.01745f;
}
