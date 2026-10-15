#include "range.h"
struct Child61FD { char pad0[0x61]; u8 active; void set(u8); };
struct Object4FD2 { char pad0[0x8c]; Child61FD* children[7]; char padA8[3]; u8 count; void set(u8); };
void Child61FD::set(u8 value) { active=value; }
void Object4FD2::set(u8 value) {
    for(u32 i=0;i<count;++i) children[i]->set(value);
}
