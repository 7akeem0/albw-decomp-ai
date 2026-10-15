#include "range.h"
struct Owner586 { char pad0[0x488]; s8 kind; };
s32 f_00586F40(Owner586* p) { return p->kind==1 || p->kind==3 ? 21 : 0; }
