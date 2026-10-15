
extern unsigned A(unsigned);
extern unsigned B(unsigned);
unsigned g = B(A(0x20000u)) >> 3;
