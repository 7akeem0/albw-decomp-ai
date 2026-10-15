typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef short s16;
struct Sys712468 { char pad[0x25]; u8 m25; };
extern Sys712468* data_00712468;
struct ItemTable40C {};
struct SaveData { char pad[0xc8]; u8 mc8; u8 mc9; u8 mca; };
struct Life { void save(SaveData* d); u8 cur; u8 max; u8 tick; };   // 0x149C08
void func_0025538C(ItemTable40C* t);
// Cls+0x694 Item12[3] (wrapped, KB #123); the three bytes are slot[0].m5, slot[2].m5, slot[1].m5
struct Item12 { char pad[5]; u8 m5; char pad6[6]; };
struct Slots { Item12 a[3]; };
struct Cls {
    virtual void vf0();
    void func_001DB87C(SaveData* d);
    Item12* slotAt(int i) { Item12* a = m694.a; return &a[i]; }   // KB #70 accessor -> r1,r1,r0 regs
    char pad[0x40c - 4];
    ItemTable40C m40c;
    char pad40d[0x598 - 0x40d];
    Life m598;
    char pad59b[0x694 - 0x59b];
    Slots m694;
};
void Cls::func_001DB87C(SaveData* d) {
    if (data_00712468->m25)
        return;
    func_0025538C(&m40c);
    m598.save(d);
    d->mc8 = slotAt(0)->m5;
    d->mc9 = slotAt(2)->m5;
    d->mca = slotAt(1)->m5;
}
