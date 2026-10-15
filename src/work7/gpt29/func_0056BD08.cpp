#include "range.h"
struct S_56BD08{char pad[4];void* child;};
extern u32 func_00569658(void*);
bool f_56BD08(S_56BD08*p){if(!p->child)return false;return func_00569658(p->child)!=0;}
