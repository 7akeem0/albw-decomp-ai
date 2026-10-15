#include "range27.h"
struct Child40C {u8 pad[0x44];u32 count;u8 pad48[0x5d-0x48];u8 kind;};
struct Owner40C {u32 pad0;Child40C* child;};
extern "C" u32 size_40C878(Child40C*);
extern "C" u32 func_0040C870(Owner40C* p){return size_40C878(p->child);}
