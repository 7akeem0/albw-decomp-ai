typedef unsigned int u32;
extern u32 helper(u32 v);
u32 f(u32* p) {
    *p &= ~1u;
    return helper(*p & ~1u);
}
