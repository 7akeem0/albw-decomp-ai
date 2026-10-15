#include "range.h"
struct Transition4A5D { char bytes[0x24]; };
struct Object4A5D { char pad[0x20]; Transition4A5D state; void* child; char gap[0x3c]; s8 current,next; void update(); };
extern void func_0034C0E4(void*,s32,s32,s32);
extern  void func_0066F90C(Transition4A5D*,s32);
void Object4A5D::update() {
    func_0034C0E4(child,current,next,5);
    current=next;
    func_0066F90C(&state,4);
}
