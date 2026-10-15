#include "ladder_types.h"
struct Mgr4ECE {char pad0[0x44];void* child;};
extern Mgr4ECE* data_0070B728;
extern bool func_00584B1C(Mgr4ECE*,void*);
bool target(void* owner){Mgr4ECE* p=data_0070B728;if(!p||!p->child)return true;return func_00584B1C(p,owner);}
