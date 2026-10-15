// 0x10E294: thread-local slot get: TLS[key->index]
typedef unsigned int u32;
struct TlsKey { u32 index; };
u32 func_0010E294(const TlsKey* k) { u32* t; __asm { mrc p15, 0, t, c13, c0, 3 } return t[k->index]; }
