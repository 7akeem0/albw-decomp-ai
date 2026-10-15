#include "en21.h"
f32 randF(Random* r,f32 max){return (f32)func_00111A64(r)*(1.0f/4294967296.0f)*max;}
bool cv(u32 v){return v!=0;}
void En::func_0021BEF8(){func_0021B518();m3e8=(s32)((randF(data_00715388,360.0f)+ -180.0f)*(4294967296.0f/360.0f));m1373=cv(randU32(data_00715388,2)&1);}
