#include "../../range.h"
struct S{u8 pad[0x1848];void*slots[1];};extern void*data_0070B898;extern void func_00503970(void*);
void func_0012E7BC(S*p){void**slot=p->slots;if(*slot){*slot=0;func_00503970(data_0070B898);}}
