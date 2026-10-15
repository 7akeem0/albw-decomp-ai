#include "range.h"
struct Object4FD4 { char pad0[0x4dc]; u8 mode; char pad4dd[0xbf]; BitFlag32 flags; bool invoke(u32,u32); };
extern void func_004F8660(Object4FD4*,u32,u32,u32);
bool Object4FD4::invoke(u32 value,u32 mode) {
    if(flags.isOn(0x100000)) { this->mode=mode; func_004F8660(this,1,value,0); return true; }
    return false;
}
