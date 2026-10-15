#include "range.h"
struct Child144 { char pad0[0x144]; void* resource; };
struct Object4EB9 { char pad0[0x10]; u32 id; s32 first, second, third; u32 m20; Child144* child; void clear(s32); void reset(); };
extern void func_0041E178(void*,u32);
void Object4EB9::clear(s32 invalid) { first=invalid; second=invalid; third=invalid; }
void Object4EB9::reset() {
    u32 value=id;
    Object4EB9* owner=this;
    func_0041E178(owner->child->resource,value);
    owner->clear(-1);
}
