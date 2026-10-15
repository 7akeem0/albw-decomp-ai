#include "range.h"
struct EqString22{char*text;virtual~EqString22(){}virtual void assureTerminationImpl_()const;const char*cstr()const{assureTerminationImpl_();return text;}};
bool target(const EqString22*a,const EqString22*b){
a->assureTerminationImpl_();
if(a->cstr()==b->cstr())return true;
const char*p=a->text;const char*q=b->text;
for(s32 i=0;i<=0x40000;++i){s8 x=p[i];s8 y=q[i];if(x!=y)return false;if(x==0)return true;}
return false;
}
