// 0x10EDBC: thread-local slot set: TLS[key->index] = v
typedef unsigned int u32;
struct TlsKey { u32 index; };
void func_0010EDBC(const TlsKey* k, u32 v) { u32* t; __asm { mrc p15, 0, t, c13, c0, 3 } t[k->index] = v; }
