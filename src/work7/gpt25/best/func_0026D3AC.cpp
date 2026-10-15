#include "../range_types.h"
struct Obj26D3 {char pad[0x5a0];Flag32 flags;char gap[0x8f4-0x5a4];s8 count;};
extern "C" s32 f_0026D3AC(Obj26D3*p,s32 n){if(p->count>=10)return 0;p->flags.set(0x80);return n;}
