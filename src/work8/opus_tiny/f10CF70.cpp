// 0x10CF70: thread-local area + 0x5C (TLS pointer from CP15 c13 user RO thread ID register)
typedef unsigned int u32;
void* func_0010CF70() { u32 tls; __asm { mrc p15, 0, tls, c13, c0, 3 } return (void*)(tls + 0x5c); }
