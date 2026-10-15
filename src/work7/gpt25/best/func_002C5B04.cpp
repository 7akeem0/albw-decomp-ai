#include "../range_types.h"
struct Manager2C5B04{char pad[0x44];u32 flag;};
extern Manager2C5B04*data_0070B728;
struct Obj2C5B04{char pad[0x47e];u8 flag;};
extern "C" void func_0014E138(Obj2C5B04*,s32);
bool enabled2C5B04(s32 mode){if(mode)return true;if(data_0070B728->flag)return false;return true;}
extern "C" void f_002C5B04(Obj2C5B04*p,s32 mode){p->flag=enabled2C5B04(mode);func_0014E138(p,mode);}
