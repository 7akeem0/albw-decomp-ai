#include "range.h"
extern void func_004C90E8(Object4E4C*);
extern bool func_0058AD80(Object4E4C*,f32);
void f_004C9794(Object4E4C* owner) {
    func_004C90E8(owner);
    if(!func_0058AD80(owner,2.0f)) owner->active=1;
}
