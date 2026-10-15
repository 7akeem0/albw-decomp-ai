// 0x68B1E4: element ctor (literal passed from 0x3281AC): five handle-like words with their own
// default ctors -> five separate zero stores (no stm merge, KB #109)
typedef unsigned int u32;
struct Handle { u32 v; Handle() : v(0) {} };
struct Elem68B { Handle a, b, c, d, e; Elem68B(); };
Elem68B::Elem68B() {}
