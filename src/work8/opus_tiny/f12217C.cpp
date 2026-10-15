// 0x12217C: reset a bit-flag word at +0x1F4, then set bit 1 (b) or bit 0 (!b).
// reset() is out-of-line in the same TU (inlined late, so the dead zero store survives and is placed first);
// set() is declared before setBit() (member order changes the inline order -> separate strne/streq).
typedef unsigned int u32;
struct BitFlag32 { u32 bits; void reset(); void set(u32 v) { bits = bits | v; } void setBit(int i) { set(1u << i); } };
void BitFlag32::reset() { bits = 0; }
struct S1221 { char pad[0x1f4]; BitFlag32 flags; void setMode(bool b); };
void S1221::setMode(bool b) { flags.reset(); if (b) flags.setBit(1); else flags.setBit(0); }
