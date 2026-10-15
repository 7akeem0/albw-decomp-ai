#include "range.h"
struct S {char pad[0x34];u8 kinds[2];u16 ids[2];};extern void* data_0070C8E0;extern void func_004AD9E8(void*,u32,u32,u32);
inline void dispatch(const u16& id,u32 kind,u32 v){func_004AD9E8(data_0070C8E0,id,kind,v);}void f_588C14(S*p,s32 i,u32 v){u8*k=p->kinds;u16*id=p->ids;dispatch(id[i],k[i],v);}
