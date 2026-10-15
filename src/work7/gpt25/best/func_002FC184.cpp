#include "../range_types.h"
struct Obj2FC1 { char pad[0x5a0]; Flag32 flags; };
extern "C" s32 f_002FC184(Obj2FC1* p,s32 n) {
    s32 result;
    if(n==3) result=0;
    else { result=n; p->flags.set(0x80); }
    return result;
}
