#include "../range_types.h"
extern "C" void func_004FABDC(void*,s32,s32,s32);
extern "C" void f_002BD498(void* p,s32 n) {
    u8 kind=n;
    if(kind==30 || (kind>=14 && kind<=17))func_004FABDC(p,13,-1,0);
}
