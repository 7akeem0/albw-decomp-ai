#include "range.h"
struct Object4957 { char pad0[0x228]; void* resource; void set(void*); };
extern void* func_0057F260(Object4957*);
extern void func_00494504(void*,Object4957*,void*);
void Object4957::set(void* value) {
    resource=value;
    if(value) { void* result=func_0057F260(this); if(result) func_00494504(resource,this,result); }
}
