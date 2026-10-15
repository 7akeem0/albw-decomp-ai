typedef signed int s32;
typedef unsigned int u32;
typedef float f32;
extern const f32 ro_006BB440[];
extern const f32 ro_006BB470[];
typedef long long s64;
static inline s32 div3072(s32 v, s32 m) { s64 p=(s64)m*v; s32 h=(s32)(p>>32); return (h>>9)-(h>>31); }
static inline s32 div3072b(s32 v, s32 m) { register s32 x __asm("r3")=v; register s32 y __asm("r2")=m; s64 p=(s64)y*x; register s32 h __asm("r3")=(s32)(p>>32); return (h>>9)-(h>>31); }
extern "C" f32 func_004139B0(s32 angle) {
    register s32 limit __asm("r3") = 0x0bff; __schedule_barrier();
    register s32 magic __asm("r2") = 0x2aaaaaab;
    const s32 diff = limit - angle;
    register s32 turns __asm("r1") = 0;
    if (0x0c00 <= diff) {
        unsigned int q = div3072(diff, magic);
        turns = -q;
        angle += (q + (q << 1)) << 10;
    }
    register s32 neg __asm("r3")=-angle;register s32 q __asm("r3")=neg/0x0c00;
    q = -q;
    if (q > 0) {
        s32 n = div3072(angle, magic);
        turns += n;
        angle += (n - (n << 2)) << 10;
    }
    s32 sign = angle >> 31;
    s32 high = (s32)((u32)angle + ((u32)sign >> 24)) >> 8;
    s32 negHigh = -high;
    u32 low = angle + (negHigh << 8);
    f32 value = 1.0f;
    if (turns > 0) {
        if (turns & 1) value = 2.0f;
        s32 n = turns >> 1;
        while (n) { __schedule_barrier(); --n; value *= 2.0f; value *= 2.0f; }
        __asm { sub turns,turns,turns }
    }
    int n = -turns;f32 half=0.5f;
    if (0 < n) {
        if (turns & 1) value *= half;
        n >>= 1;
        while (n) { __schedule_barrier(); --n; value *= half; value *= half; }
    }
    if (0 != high) value *= ro_006BB440[high];
    if (low != 0) value *= ro_006BB470[low];
    return value;
}




















