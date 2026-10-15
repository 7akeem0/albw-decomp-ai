#include "range.h"
bool func_003C4CF4(Obj3BD* p,s32 state,bool force) {
    if(p->v79(state,force)) {
        func_0066A140(&p->state,state);
        return true;
    }
    return false;
}
