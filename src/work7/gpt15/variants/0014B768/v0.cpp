#include "../../range.h"
struct S{char pad[0x1bc];void*ptr;};extern void*data_00712450;extern void*data_0070B960;extern "C" void func_00132384(void*);extern "C" void func_0014B768(S*p){p->ptr=data_00712450;func_00132384(data_0070B960);}
