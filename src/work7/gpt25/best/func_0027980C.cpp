#include "../range_types.h"
struct Obj27980C{char pad[0x4ab];u8 kind;};
extern "C" void func_00277648(Obj27980C*);
extern "C" void func_002779D8(Obj27980C*);
extern "C" void func_002773B4(Obj27980C*);
extern "C" void f_0027980C(Obj27980C*p){switch(p->kind){case 3:func_002779D8(p);break;case 1:func_00277648(p);break;case 4:func_002773B4(p);break;}}
