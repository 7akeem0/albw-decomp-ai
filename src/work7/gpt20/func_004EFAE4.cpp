#include "ladder_types.h"
struct Object4EFA {char pad[0x30];u32 m30;};
extern void func_004EF418(Object4EFA*,u32*,int,int);
void func_004EFAE4(Object4EFA* p,int n) {func_004EF418(p,&p->m30,n,0);}
