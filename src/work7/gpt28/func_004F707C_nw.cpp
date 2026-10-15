#include "range.h"
struct Child61 { char pad0[0x61]; u8 active; };
struct Object4F70 { char pad0[0x2c]; Child61* child; };
extern  void func_004F6F14(Object4F70*,const Vec3*,const Vec3*,u32,u32);
void f_004F707C(Object4F70* owner, const Vec3* position, const Vec3* scale, u32 angle, u32 flags) {
    if(owner->child) {
        owner->child->active=1;
        func_004F6F14(owner,position,scale,angle,flags);
    }
}
