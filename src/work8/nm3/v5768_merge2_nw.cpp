typedef unsigned int u32;typedef unsigned char u8;
struct P{char p[0xd];u8 m0D;u8 m0E;};
extern void* data_007142C8;
extern "C"  u32 func_0058D860(void*);
bool f(P*o){return o->m0D==0&&o->m0E==0&&func_0058D860(data_007142C8)!=0;}
