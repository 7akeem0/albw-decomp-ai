#include "ladder_types.h"
struct State50BE{s32 count;};
struct O50BE{char pad[0x44c];State50BE state;s32 count()const;};
s32 O50BE::count()const{return state.count;}
extern void func_0066B6C4(State50BE*,s32) ;
void f_0050BE64(O50BE* p){if(p->count()>=240)func_0066B6C4(&p->state,2);}
