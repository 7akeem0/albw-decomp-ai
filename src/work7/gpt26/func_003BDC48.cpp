#include "range.h"
bool func_003BDC48(Obj3BD* p,s32 state,bool force) {
    if(p->v79(state,force)) {
        func_00669C30(&p->state,state);
        return true;
    }
    return false;
}
