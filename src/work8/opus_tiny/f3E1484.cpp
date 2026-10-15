// 0x3E1484: 2-bit field (bits 2..3) setter on the u16 at +0x1e; reached by fall-through from the
// NOPped forwarder 0x3E147C (ldr r0,[r0,#0x68]). The masked value is an inline-setter argument.
typedef unsigned int u32; typedef unsigned short u16;
struct F { u16 v; void set(u32 x) { v = (v & ~0xc) | x; } };
struct Obj { char pad[0x1e]; F f; void setMode(u32 n); };
void Obj::setMode(u32 n) { f.set((n << 2) & 0xc); }
