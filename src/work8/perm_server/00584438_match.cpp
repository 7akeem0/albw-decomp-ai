
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;

struct Sub84 {
    u8 pad0[0x16c];
    s32 a[2];
};

struct Obj84 {
    u8 pad0[0x400];
    Sub84 m400;
};

s32 func_0048AC68(s32 v);

struct Ctr84 {
    u32 v;
    Ctr84(u32 x) : v(x) {}
    operator u32() const { return v; }
    Ctr84& operator++() { ++v; return *this; }
};

s32 clampRange84(s32 v, s32 lo, s32 hi)
{
    if (v < lo)
        return lo;
    if (v > hi)
        return hi;
    return v;
}

s32 func_00584438(Obj84* self)
{
    s32* a = self->m400.a;
    u32 zero = 0;
    s32 sum = (s32)zero;
    Ctr84 i(zero);
    do {
        sum += func_0048AC68(a[i]);
        ++i;
    } while (i < 2);
    return clampRange84(sum, (s32)zero, 0x32);
}
