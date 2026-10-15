#include "range.h"
u32 sign3D252(Result26 r){return r.value>>31;}
inline void diagnose3D252(u32 result,u32 pc) {
    Result26 r={result};
    if(sign3D252(r))func_0010AC24(result,pc);
}
bool func_003D252C() {
    u32 buffer[48];
    u32 result=func_00108630(buffer,0xC0,0xC0000);
    diagnose3D252(result,__current_pc());
    return (buffer[0]&0x20)!=0;
}
