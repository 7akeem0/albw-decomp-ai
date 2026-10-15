#define func_0065AE94 func_0065B098
#define func_0065AF00 func_0065B104
#include "range.h"
void target(Soldier30* p){
    if(p->counter==0){
        if(func_0058A7D4(p)->below(100)<50)p->state.change(1);
        else p->state.change(2);
    }
}
