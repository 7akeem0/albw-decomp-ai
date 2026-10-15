typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16; typedef unsigned int u32; typedef int s32;

struct Q { char pad[0x18]; s8 m18; };
extern Q* data_00709DF8;
struct P { char pad[0xc8]; u8 m0c8; char p2[0x1a5-0xc9]; u8 m1a5; };
__weak void f2(void*, s32);
void f(P* p){ if(p->m0c8!=1) return; Q* q=data_00709DF8; if(q){ s8 t=q->m18; if(t!=7 && t!=0x25){ p->m1a5=1; return; } } f2((char*)p+0xc4, 0); }
