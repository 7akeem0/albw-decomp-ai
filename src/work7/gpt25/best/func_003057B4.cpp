#include "../range_types.h"
struct Obj3057B4{char pad[0x484];void*item;};
extern void*data_00709D28;
extern "C" void func_001E4090(Obj3057B4*,bool);
extern "C" void func_003249B4(Obj3057B4*);
extern "C" void func_004A8304(void*,void*);
extern "C" void f_003057B4(Obj3057B4*p){func_001E4090(p,true);func_003249B4(p);func_004A8304(data_00709D28,p->item);}
