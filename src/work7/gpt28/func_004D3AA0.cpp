#include "range.h"
struct Arg4D3A { char pad[0x28];u32 value;bool equals(u32 v)const{return value==v;} };
extern u32 func_005568E8(PlayerPositionMgr*);
bool f_004D3AA0(void*,const Arg4D3A* a) {
    if(data_0070FB60 && a->equals(func_005568E8(data_0070FB60))) return true;
    return false;
}
