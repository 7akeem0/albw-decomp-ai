#include "range.h"
struct Object4EA1 { char pad[0x24]; void* tail; char gap[0x14]; void* state; char gap40[0xc]; void* queried; void update(); };
extern bool func_00294EF0(void*);
extern void func_002DED00(void*,s32);
extern void func_0048ECF0(void*);
void Object4EA1::update() {
    if(func_00294EF0(queried)) { func_002DED00(state,2);func_0048ECF0(tail); }
}
