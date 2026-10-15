// 0x3E11D8: forward (u8)p->m0 and x to 0x3DF3BC on the global object at 0x7A06F0
typedef unsigned int u32; typedef unsigned char u8;
extern unsigned char data_007A06F0[];
extern void func_003DF3BC(void* self, u8 id, u32 x);
struct T3E1 { u32 m0; };
void func_003E11D8(T3E1* p, u32 x) { func_003DF3BC(data_007A06F0, (u8)p->m0, x); }
