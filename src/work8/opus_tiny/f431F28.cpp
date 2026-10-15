// 0x431F28 (28 B): set child pointer and cache child->mb4, or clear both
struct B4 { char pad[0xb4]; void* mb4; };
struct F { char pad[0x58]; B4* m58; void* m5c; void f(B4* p); };
void F::f(B4* p) { if (p == 0) { m5c = 0; m58 = 0; } else { m58 = p; m5c = p->mb4; } }
