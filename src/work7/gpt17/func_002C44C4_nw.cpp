#include "range.h"
struct Sub {u32 opaque;};
struct Obj {u8 pad[0x568];Sub state;u8 p56c[0x28];void* value;};
extern  void func_00662DE0(Sub*,s32);
void f_002C44C4(Obj* p,void* v){p->value=v;func_00662DE0(&p->state,1);}
