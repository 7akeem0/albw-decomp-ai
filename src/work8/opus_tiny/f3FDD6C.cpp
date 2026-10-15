// 0x3FDD6C: member dtor (called in the 0x232BBC D1 chain and on a stack object in 0x23288C) that
// re-initialises its two-word state; the inlined state ctor (Word(u32) members) puts the zero in r2.
inline void* operator new(unsigned, void* p) { return p; }
typedef unsigned int u32;
struct Word { u32 v; Word(u32 x) : v(x) {} };
struct State { Word a, b; State() : a(0), b(0) {} };
struct Holder3FD { u32 pad[3]; State st; ~Holder3FD(); };
Holder3FD::~Holder3FD() { new (&st) State; }
