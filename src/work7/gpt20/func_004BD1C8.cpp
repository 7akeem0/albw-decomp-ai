#include "ladder_types.h"
struct O4BD1 {u32 pad0;char sub4[4];};
extern "C" bool func_00547B20(void*);
extern "C" bool func_00588BF0(O4BD1*,u32);
extern "C" bool func_004BD1C8(O4BD1*p){if(func_00547B20(p->sub4)&&!func_00588BF0(p,0))return true;return false;}
