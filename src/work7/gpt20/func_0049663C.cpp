#include "ladder_types.h"
struct Mgr4966 {virtual ~Mgr4966();virtual void dispatch(void*,u32,u32,u32);};
extern Mgr4966* data_00714FC0;
extern "C" void func_0049663C(void*p,u32 a,u32 b,u32 c){data_00714FC0->dispatch(p,a,b,c);}
