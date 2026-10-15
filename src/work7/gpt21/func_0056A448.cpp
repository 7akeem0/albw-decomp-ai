#include "range.h"
struct R{u32 m0,offset;};extern u8 data_0072579C[];extern bool func_0056D40C(void*,u32*,u32);void*f_56A448(void*p){u32 off;if(!func_0056D40C(p,&off,9))return data_0072579C;R*r=(R*)((char*)p+off);return(char*)r+r->offset;}
