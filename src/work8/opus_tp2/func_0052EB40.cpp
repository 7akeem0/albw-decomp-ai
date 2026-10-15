#include "../../work4/agent5/a5.h"
struct Counter { int v; Counter(int x):v(x){} operator int() const { return v; } Counter& operator++(){++v;return *this;} };
class Cls {
public:
    s8 findIdx(s32 id);
    char pad0[0x694];
    StateSlot mSlots[3];
    StateSlot* getSlot(int i) { return &mSlots[i]; }
    StateSlot* getSlot2(int i) { StateSlot* s = mSlots; return s + i; }
};
s8 Cls::findIdx(s32 id) { for (Counter i(0); i < 3; ++i) { if (getSlot(i)->current == id) return (s8)i; } return -1; }
