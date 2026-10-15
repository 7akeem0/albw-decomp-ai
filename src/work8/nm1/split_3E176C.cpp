typedef float f32;
typedef unsigned int u32;
struct Sub { char pad[0x6c]; unsigned short f; };
struct P { char pad[0x64]; f32 m64; Sub* sub; };
void g_003E1778(Sub* s, f32 v);
void func_003E176C(P* p, f32 v) { p->m64 = v; g_003E1778(p->sub, v); }
