#include "range.h"
struct Resource_003C7A20 {void*resource;void*data;Resource_003C7A20(const void*);};
extern s32 func_0027A604(void*,const Resource_003C7A20&,u32);
bool f_00279BDC(void*p,const void*input,u32 arg){Resource_003C7A20 r(input);return func_0027A604(p,r,arg)!=0;}
