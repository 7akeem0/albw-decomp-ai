#include "ladder_types.h"
struct NoThrow4B99{};
void* operator new(unsigned int,NoThrow4B99) throw();
struct Child4B99{char bytes[0x164];Child4B99();};
struct O4B99{char pad[0x14];Child4B99* child;};
extern void func_004B9958(Child4B99*,s32);
void f_004B9930(O4B99* p){Child4B99* q=new((NoThrow4B99()))Child4B99;p->child=q;func_004B9958(q,2);}
