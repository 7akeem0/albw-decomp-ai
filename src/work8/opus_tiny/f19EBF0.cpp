// 0x19EBF0: element ctor (passed to __aeabi_vec_ctor as a literal): Word members initialised to 0 in the
// init list; the inlined Word(u32) ctor parameter puts the zero in r2.
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct Elem_19EBF0 { u32 pad0[3]; Word m12; Elem_19EBF0(); };
Elem_19EBF0::Elem_19EBF0() : m12(0) {}
