typedef unsigned int u32;
struct Flag { u32 v; void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; } void reset(u32 m) { change(m, false); } };
struct En { char pad[0x3ac]; float m3ac; char pad2[0x59c - 0x3b0]; Flag m59c; void f(); };
void En::f() { m59c.reset(3); m59c.reset(0xc); m59c.reset(0x30); m59c.reset(0x80); m59c.reset(0x300); m3ac = -1.0f; }
