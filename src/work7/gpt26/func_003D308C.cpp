#include "range.h"
void func_003D308C(Obj3D30* p) {
    if(p->holder.value) {
        func_003D3254(&p->holder);
        p->holder.value=0;
    }
}
