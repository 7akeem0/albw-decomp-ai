// 0x1023E4: call through a function pointer argument (tail bx r0); passed as a literal from 0x101538
void func_001023E4(void (*fn)()) { fn(); }
