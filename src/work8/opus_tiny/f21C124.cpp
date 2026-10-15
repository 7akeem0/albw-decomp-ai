// 0x21C124: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_21C124 { u32 pad0[7]; Word m28; Word m32; Elem_21C124(); };
Elem_21C124::Elem_21C124() : m28(0), m32(0) {}
