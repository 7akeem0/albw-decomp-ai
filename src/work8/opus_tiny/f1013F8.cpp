// 0x1013F8: record the current thread's TLS pointer in data_0071611C.m4
typedef unsigned int u32;
struct G7161 { u32 m0; u32 m4; };
extern G7161 data_0071611C;
void func_001013F8() { u32 t; __asm { mrc p15, 0, t, c13, c0, 3 } data_0071611C.m4 = t; }
