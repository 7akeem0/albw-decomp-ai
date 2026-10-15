#include "range.h"
struct Random429 {u32 func_00111A64();u32 below(u32 n){return (u32)(((u64)func_00111A64()*n)>>32);} };
extern Random429* func_0058A7D4(void*);
struct Obj429 {u8 pad[0x48];void* actor;u8 pad4c[0x5e-0x4c];u16 timer;};
void func_00429204(Obj429* p){p->timer=func_0058A7D4(p->actor)->below(11)+30;}
