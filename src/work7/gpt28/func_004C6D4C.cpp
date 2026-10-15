#include "range.h"
void SlotOwner4C6::select(s32 index) {
    Slot64* slot = &m4[index];
    slot->active = 0;
    m51c = slot;
}
