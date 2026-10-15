#include "range.h"
struct SpawnParam {u8 pad[0x1c];u32 a,b,c;u8 gap[0x48-0x28];u32 d,e;u8 gap50[0x2c0-0x50];u32 f;SpawnParam();void func_002DFF7C();};
SpawnParam::SpawnParam():a(0),b(0),c(0),d(0),e(0),f(0){func_002DFF7C();}
