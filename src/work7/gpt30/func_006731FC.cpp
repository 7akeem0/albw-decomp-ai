#include "range.h"
void target(Soldier30* p){
    if(p->counter==0){
        if(func_0058A7D4(p)->below(100)<50)p->state.change(1);
        else p->state.change(2);
    }
}
