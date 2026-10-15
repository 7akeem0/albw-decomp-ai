//AXESX {"A":["m10->mSlots[2].current","m10->getSlot(2)->current","m10->getSlotAt(2)->current","m10->mSlots[2].getCur()","m10->getSlotAt(2)->getCur()","m10->slots.a[2].current"],"B":["m10->mSlots[1].current","m10->getSlot(1)->current","m10->getSlotAt(1)->current","m10->mSlots[1].getCur()","m10->getSlotAt(1)->getCur()","m10->slots.a[1].current"]}
typedef signed char s8;
typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

s32 func_00255BAC(s32 id);
struct ItemTable {
    s32 get(s32 id);   // 0x537C14
    s32 count();       // 0x537AD4
};
struct StateSlot {
    void* owner;
    s8 mode;
    s8 current;
    s8 pending;
    u8 u7;
    u8 g8;
    u8 g9;
    u8 ua[2];
    s8 getCur() const { return current; }
};
struct Slots { StateSlot a[3]; };
struct Player {
    char pad0[0x40c];
    ItemTable m40c;
    char pad40d[0x694 - 0x40d];
    union { StateSlot mSlots[3]; Slots slots; };
    StateSlot* getSlot(int i) { return &mSlots[i]; }
    StateSlot* getSlotAt(int i) { StateSlot* s = mSlots; return s + i; }
};
struct GameState {
    char pad[0x18];
    s8 m18;
};
extern GameState* data_00709DF8;

struct Mgr {
    char pad[0x10];
    Player* m10;
    bool f();
};

static inline bool isSpecial(s32 id) { return (u32)(id - 0x12) <= 4; }

bool Mgr::f() {
    s8 st = data_00709DF8->m18;
    if (st != 7 && st != 0x25) {
        if (m10->m40c.count() > 0) return true;
        return false;
    }
    s32 a = func_00255BAC(m10->getSlotAt(2)->current);
    if (isSpecial(a) && m10->m40c.get(a) == 5) return true;
    s32 b = func_00255BAC(m10->getSlotAt(1)->current);
    if (isSpecial(b) && m10->m40c.get(b) == 5) return true;
    return false;
}
