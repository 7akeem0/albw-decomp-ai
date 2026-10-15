#include "range.h"
u32 sign26(Result26 r){return r.value>>31;}
inline void diagnose26(u32 result,u32 pc) {
    Result26 r={result};
    if(sign26(r))func_003D302C(result,pc);
}
void func_003CDED0() {
    u32 result=func_003C7E50(data_00716134,0xF000000B);
    if((s32)(result&0x80000000u)<0)diagnose26(result,__current_pc());
}
