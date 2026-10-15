#include "../range_types.h"
struct Obj327B{char pad[0x2c];s16 kind;};
extern "C" void func_002E0994(Obj327B*,s32);
void func_00327B84(Obj327B*p){switch(p->kind){case 0:func_002E0994(p,0);break;case 1:func_002E0994(p,1);break;case 2:func_002E0994(p,2);break;}}
