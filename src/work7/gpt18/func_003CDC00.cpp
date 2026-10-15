#include "range.h"
__svc(0x23)u32 closeHandle(u32);struct O{u32 h;~O();};extern void func_0010C180(O*);O::~O(){func_0010C180(this);if(h){closeHandle(h);h=0;}}
