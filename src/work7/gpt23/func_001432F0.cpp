#include "range.h"
extern "C" void func_00151148(void*,s32);
extern "C" void func_004CF478(void*,s32,s32);
extern "C" void func_001432F0(Actor143* p) {
    if(p->child) func_00151148(p->child,0);
    func_004CF478(p->model,0,0);
    p->flag=0;
}
