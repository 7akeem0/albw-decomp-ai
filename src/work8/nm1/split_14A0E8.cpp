typedef unsigned int u32;
struct Sub { char pad[0x8c]; u32 m8c; };
struct P { char pad[0x34]; Sub* sub; char pad2[0x20]; u32 m58; };
void g_0014A0F4(Sub* s, u32 v);
void func_0014A0E8(P* p, u32 v) { p->m58 = v; g_0014A0F4(p->sub, v); }
