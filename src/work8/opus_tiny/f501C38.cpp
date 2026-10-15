// 0x501C38: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_501C38 { u32 pad0[5]; Word m20; Elem_501C38(); };
Elem_501C38::Elem_501C38() : m20(0) {}
