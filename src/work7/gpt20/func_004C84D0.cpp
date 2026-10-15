#include "ladder_types.h"
struct Manager4C84{char pad[0x10];void* child;};
extern Manager4C84* data_00711010;
struct O4C84{char pad[0x138];void* value;};
extern void func_001FEFBC(O4C84*,const void*);
extern void* func_0055326C(void*);
void f_004C84D0(O4C84* p,const void* name){func_001FEFBC(p,name);p->value=func_0055326C(data_00711010->child);}
