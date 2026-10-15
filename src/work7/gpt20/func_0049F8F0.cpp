#include "ladder_types.h"
struct O49F8 {char pad0[0x5c];void* child;};
struct Req49F8 {char pad0[0x68];O49F8* owner;char pad6c[0x14];};
extern void func_00110D44(void*,const void*,u32);
extern void func_0049D884(void*,const Req49F8&);
void target(O49F8*p,const Req49F8&input){Req49F8 copy;func_00110D44(&copy,&input,sizeof(copy));copy.owner=p;func_0049D884(p->child,copy);}
