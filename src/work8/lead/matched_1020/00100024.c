typedef unsigned int u32;
extern u32 bss_007279F0[];
extern u32 bss_007AF434[];
void f(void) {
    u32* p = bss_007279F0;
    while (p < bss_007AF434) *p++ = 0;
}
