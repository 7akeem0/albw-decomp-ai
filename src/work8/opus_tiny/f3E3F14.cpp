// 0x3E3F14: leave the static critical section at bss_007A042C (0x10C160 = unlock); entered via NOPped fwd 0x3E3F10
extern "C" void func_0010C160(void*);
extern unsigned char bss_007A042C[];
void unlock_3E3F14() { func_0010C160(bss_007A042C); }
