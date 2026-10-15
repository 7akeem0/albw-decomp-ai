#include "range.h"
extern "C" void* func_0014DF18(void*,u32,u32,u32,u32,u32);
extern "C" void* func_0014E428(ActorResource34C* p,u32 a,u32 b,u32 c,u32 save,u32 d,u32 e) {
    void* result=func_0014DF18(p->child,a,b,c,d,e);
    if(save) p->cached=result;
    return result;
}
