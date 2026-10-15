#include "range.h"
struct Obj393B {char pad[0xbba];u8 flag;};
extern void func_00393D7C(Obj393B*,void*);
extern void func_00393BF8(Obj393B*,void*);
void func_00393BE0(Obj393B* p,void* a){if(p->flag)func_00393D7C(p,a);else func_00393BF8(p,a);}
