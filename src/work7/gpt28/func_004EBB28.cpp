#include "range.h"
extern void func_00294404(void*,u32,u32,bool,bool);
extern void func_00259384(void*,u32);
void f_004EBB28(Object4EA0* owner,u32 a,u32 b) {
    func_00294404(owner->first,a,b,true,true);
    func_00259384(owner->second,a);
}
