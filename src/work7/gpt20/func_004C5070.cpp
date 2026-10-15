#include "ladder_types.h"
struct Object4C50 {char pad[0x30];u32 m30,m34;};
extern void func_004C5080(Object4C50*);
void func_004C5070(Object4C50* p) {p->m34=0;p->m30=0;func_004C5080(p);}
