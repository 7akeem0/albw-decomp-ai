#include "range.h"
bool func_003BD130(Obj3BD* p,s32 state,bool force) {
    if(p->v79(state,force)) {
        func_00669AEC(&p->state,state);
        return true;
    }
    return false;
}
