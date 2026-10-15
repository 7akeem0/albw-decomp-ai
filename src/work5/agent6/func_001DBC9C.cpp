typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef short s16;
struct Sys712468 { char pad[0x25]; u8 m25; };
extern Sys712468* data_00712468;
struct ItemTable40C {};
struct SaveData { char pad[0xc8]; s8 mc8; s8 mc9; s8 mca; };
struct Life { void load(SaveData* d); u8 cur; u8 max; u8 tick; };   // 0x149C2C
void func_002554A0(ItemTable40C* t);
struct Item12 { void setItem(s32 v, bool a, bool b); char pad[12]; };   // 0x2D455C
struct Slots { Item12 a[3]; };
inline s32 validIdx(s32 v) { return (u32)(v + 2) < 0x1a ? v : -1; }
inline s32 validIdx2(s32 v) { if ((u32)(v + 2) >= 0x1a) v = -1; return v; }
struct Cls {
    virtual void vf0();
    void func_001DBC9C(SaveData* d);
    Item12* slotAt(int i) { Item12* a = m694.a; return &a[i]; }
    char pad[0x40c - 4];
    ItemTable40C m40c;
    char pad40d[0x598 - 0x40d];
    Life m598;
    char pad59b[0x694 - 0x59b];
    Slots m694;
};
void Cls::func_001DBC9C(SaveData* d) {if (data_00712468->m25) return; func_002554A0(&m40c); m598.load(d);s32 a = validIdx(d->mc8); s32 b = validIdx(d->mc9); s32 c = validIdx(d->mca); slotAt(0)->setItem(a, false, true); slotAt(2)->setItem(b, false, true); slotAt(1)->setItem(c, false, true);}
