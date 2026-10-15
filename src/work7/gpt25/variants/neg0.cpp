#include "../range_types.h"
struct Arg { char pad[0x28]; u32 value; };
extern "C" s32 func_00521080(void*,const u32*);
extern "C" s32 f_002E4D2C(void*p,const Arg*a){if(func_00521080(p,&a->value)) return 0; return 1;}
