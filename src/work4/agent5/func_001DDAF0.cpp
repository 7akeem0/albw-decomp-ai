#include "a5.h"

// Loop index of class type: ARMCC fully unrolls every plain-int spelling of this loop,
// the original keeps it rolled (KB #58/#76).
struct Counter {
    int v;
    Counter(int x) : v(x) {}
    operator int() const { return v; }
    Counter& operator++() { ++v; return *this; }
};

class Cls {
public:
    StateSlot* findSlot(s32 id);
    char pad0[0x694];
    StateSlot mSlots[3];
    // compare address = (this + i*12) + 0x694
    StateSlot* getSlot(int i) { return &mSlots[i]; }
    // return address = (this + 0x694) + i*12, scheduled 'add #0x400' first
    StateSlot* getSlotAt(int i) { StateSlot* s = mSlots; return s + i; }
};

StateSlot* Cls::findSlot(s32 id) {
    for (Counter i(0); i < 3; ++i) {
        if (getSlot(i)->current == id)
            return getSlotAt(i);
    }
    return 0;
}
