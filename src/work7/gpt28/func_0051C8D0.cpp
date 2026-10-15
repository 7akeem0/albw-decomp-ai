#include "range.h"
struct Object51C8 { char pad0[0x54]; void* second; char pad58[0xd8]; void* first; };
extern void func_001E3328(void*);
extern void func_0012C790(void*);
void f_0051C8D0(Object51C8* owner) {
    if(owner->first) { func_001E3328(owner->first); if(owner->second) func_0012C790(owner->second); }
}
