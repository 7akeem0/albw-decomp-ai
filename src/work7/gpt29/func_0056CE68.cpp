#include "range.h"
struct Owner56CE { char pad[0x3c]; void* child; };
extern void* func_0056AF9C(void*,u32);
extern void func_0056B94C(void*,u32,u32*);
void f_0056CE68(Owner56CE* p,u32 id,u32 index,u32* out) {
    void* value=func_0056AF9C(p->child,id);
    if(value)func_0056B94C(value,index,out);
}
