#include "range.h"
extern Global14D55* data_00709F30;
extern "C" void func_00480C60(Child14D55*,void*,const u32*);
extern "C" void func_0014D550(Owner14D55* p,const u32* value){
    Child14D55* c=p->child;
    if(c && c->first==0 && c->second==0) func_00480C60(c,&data_00709F30->embedded,value);
}
