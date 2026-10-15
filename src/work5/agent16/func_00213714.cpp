typedef unsigned int u32;
struct BitFlag32 { u32 v; void set(u32 m) { v |= m; } };
struct En { char p[0x59c]; BitFlag32 m59c; void f(); };
void En::f() { m59c.set(0x100); }
