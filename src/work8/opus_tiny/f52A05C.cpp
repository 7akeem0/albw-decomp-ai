// 0x52A05C: bit test on an inline u32 bit array at +0x11c. The mask helper is a static member defined
// out-of-class in the same TU (inlined late), taking the already-masked bit index; named word/mask locals
// with (mask & word) reproduce the original r2/r0/r1 allocation.
typedef unsigned int u32;
struct BitArr_52A05C {
    u32 mWords[8];
    static u32 makeMask(u32 bit);
    bool isOn(u32 i) const { const u32* p = mWords; u32 word = p[i >> 5]; u32 m = makeMask(i & 31); return (m & word) != 0; }
};
u32 BitArr_52A05C::makeMask(u32 bit) { u32 one = 1; return one << bit; }
struct Owner_52A05C { char pad[0x11c]; BitArr_52A05C bits; bool isOn(u32 i) const; };
bool Owner_52A05C::isOn(u32 i) const { return bits.isOn(i); }
