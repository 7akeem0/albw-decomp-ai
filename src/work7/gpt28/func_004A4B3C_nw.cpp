#include "range.h"
struct Sub4A4B { char bytes[0x28]; };
struct Object4A4B { char pad[0x38]; Sub4A4B first; char gap[0x14]; Sub4A4B timer; u8 count; void update(); };
extern bool func_00532BA0(Sub4A4B*);
extern  void func_0066F7C8(Sub4A4B*,s32);
void Object4A4B::update() {
    if(func_00532BA0(&timer)) { ++count; func_0066F7C8(&first,0); }
}
