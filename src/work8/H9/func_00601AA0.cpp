// Float passed and returned as raw bits in r0: s = sqrt(x); if (isNaN(s) && !isNaN(x)) func_00100974(1); return bits(s).
typedef unsigned u32;
static inline u32 absBits(float f) { return *(u32*)&f & 0x7fffffffu; }
static inline u32 isNaNf(float f) { return (0x7f800000u - absBits(f)) >> 31; }
void func_00100974(int);
extern "C" float sqrtf(float);
u32 func_00601AA0(u32 xb) {
    float x = *(float*)&xb;
    float s = sqrtf(x);
    if (isNaNf(s)) {
        if (!isNaNf(x)) func_00100974(1);
    }
    return *(u32*)&s;
}
