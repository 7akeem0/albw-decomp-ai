#include "range.h"
struct Owner569F { u32 pad0; void* child; };
extern u32 func_00569658(void*);
bool f_00569F1C(Owner569F* p) { if(!p->child)return false;return func_00569658(p->child)!=0; }
