#include "range.h"
struct Obj15BA5C24{char pad[0x2e];u16 kind;char pad30[0x59c-0x30];Flag32_24 flags;};
extern void func_0015EE98(Obj15BA5C24*);
s32 index15BA5C24(u32 n){if(n<4){if(n>=2)return n-2;}return -1;}
bool valid15BA5C24(s32 i){return i>=0;}
void flags15BA5C24(Obj15BA5C24*p,bool on){if(!on)p->flags.set(7);else p->flags.set(5);}
extern "C" void target(Obj15BA5C24*p){func_0015EE98(p);flags15BA5C24(p,valid15BA5C24(index15BA5C24(p->kind&255)));}
