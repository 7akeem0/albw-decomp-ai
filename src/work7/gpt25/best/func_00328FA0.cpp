#include "../range_types.h"
struct Obj328F {char pad[0xc9c];u8 flag;};
extern "C" void func_004F68AC(Obj328F*);
extern "C" void func_00329078(Obj328F*);
extern "C" void f_00328FA0(Obj328F*p){func_004F68AC(p);if(!p->flag)func_00329078(p);p->flag=0;}
