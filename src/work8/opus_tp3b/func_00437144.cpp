#include "../../work7/gpt22/range.h"
struct EqString22{char*text;virtual~EqString22(){}virtual void assureTerminationImpl_()const;const char*cstr()const{assureTerminationImpl_();return text;}};
inline bool isEqual(const EqString22*a,const EqString22*b){
a->assureTerminationImpl_();
if(a->cstr()==b->cstr())return true;
const char*p=a->text;const char*q=b->text;
for(s32 i=0;i<=0x40000;++i){s8 x=p[i];s8 y=q[i];if(x!=y)return false;if(x==0)return true;}
return false;
}
struct Obj437{char pad[0x24];EqString22 s;s32 f(const EqString22*b);};
s32 Obj437::f(const EqString22*b){if(isEqual(&s,b))return 0;return -1;}
