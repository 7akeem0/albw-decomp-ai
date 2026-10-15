#include "range.h"
extern s32 data_00716178;
extern "C" u32 func_00108878(u32*,const void*,s32,u32);
extern "C" u32 func_00104868(u32* out,const void* name,s32 count,u32 flags) {
    if (data_00716178 <= 0) return 0xd8a067f8u;
    if (count > 8) return 0xd9006405u;
    return func_00108878(out,name,count,flags);
}
