#include "range.h"
struct Obj{u8 pad[0x47c];void*model;};
extern u32 func_00324A18(Obj*);
extern void func_004CF478(void*,u32,u32);
u32 f_002C66D4(Obj*p){u32 value=func_00324A18(p);func_004CF478(p->model,value,0);return value;}
