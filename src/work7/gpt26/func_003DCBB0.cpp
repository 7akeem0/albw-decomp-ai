#include "range.h"
void func_003DCBB0(Obj3DCB* p,u32 index,f32 value) {
    if(p->engaged) {
        p->values[index]=value;
        func_003DDF70(&bss_007A8798,index,value);
    }
}
