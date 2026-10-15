#include "range.h"
struct Obj {u8 pad[0x8f0];s32 state;};
extern bool func_0058A8F0(Obj*);
extern  void func_006609A0(s32*,s32);
void f_0026CF5C(Obj* p){if(func_0058A8F0(p))func_006609A0(&p->state,0);}
