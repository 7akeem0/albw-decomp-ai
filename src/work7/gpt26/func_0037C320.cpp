#include "range.h"
void func_0037C320(Obj37C32* p,f32 scale) {
    if(p->state) {
        p->a*=scale;
        p->b*=scale;
        p->changed=1;
        p->state=2;
    }
}
