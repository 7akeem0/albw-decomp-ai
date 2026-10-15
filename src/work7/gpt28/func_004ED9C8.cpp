#include "range.h"
struct Object4ED9 { char pad0[0x10]; void* first; u32 m14; void* second; };
extern void func_004356B4(void*);
void f_004ED9C8(Object4ED9* owner) {
    if(owner->first) func_004356B4(owner->first);
    if(owner->second) func_004356B4(owner->second);
}
