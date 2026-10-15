#include "range.h"
struct Pair5586 { u32 index,value; };
struct Owner5586 { char pad0[0xc]; Pair5586 pair; };
struct Child5586 { char pad0[0x118]; u32 value; };
struct Dest5586 { char pad0[0x1418]; SafeSlots<Child5586*,16> slots; };
void f_00558600(Owner5586* p,Dest5586* dst) { Pair5586 a=p->pair;Child5586* c=dst->slots[a.index];if(c)c->value=a.value; }
