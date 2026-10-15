#include "range.h"
struct Object5246 { char pad0[0x22]; u16 flags; char pad24[7]; s8 active; char pad2c[0xc]; u16 gate; bool test() const; };
bool Object5246::test() const {
    if(!gate) { if(active) { if(flags) return true; } }
    return false;
}
