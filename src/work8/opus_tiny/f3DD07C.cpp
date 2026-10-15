// 0x3DD07C: out-of-line 8-byte POD copy (ldm/stm)
typedef unsigned int u32;
struct Pair3DD { u32 a, b; };
void func_003DD07C(Pair3DD* d, const Pair3DD* s) { *d = *s; }
