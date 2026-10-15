#include "range.h"
struct Callback5230 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void invoke(u32,u32,u32,u32); };
struct Object5230 { char pad0[0x3d0]; Callback5230* child; bool invoke(u32,u32,u32,u32); };
bool Object5230::invoke(u32 a,u32 b,u32 c,u32 d) {
    if(child) { child->invoke(a,b,c,d); return true; }
    return false;
}
