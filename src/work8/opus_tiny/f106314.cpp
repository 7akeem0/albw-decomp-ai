// 0x106314: thread start helper: FPSCR = 0x03000000 (default-NaN + flush-to-zero), called from 0x10994C
typedef unsigned int u32;
void func_00106314() { register u32 fpscr __asm("fpscr"); fpscr = 0x3000000; }
