#include "range.h"
__svc(0x23)u32 closeHandle(u32);struct H{u32 v;~H(){if(v){closeHandle(v);v=0;}}};struct O{char pad[0x14];H h;~O();};extern void func_003CDAC0(O*);O::~O(){func_003CDAC0(this);}
