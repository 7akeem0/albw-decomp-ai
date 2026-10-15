typedef unsigned int u32;

extern u32 g_709EC0;
extern u32 g_714248;
extern u32 g_712588;
extern "C" void func_0029FAB4(u32);
extern "C" void func_002DF790(u32);
extern "C" void func_004B9930(u32);
extern "C" void func_0066777C(void*, u32);
extern "C" void func_002DF3E4(u32);

extern "C" void func_0037AFFC(char* self) {
    if (g_709EC0 == 0) func_0029FAB4(0);
    func_002DF790(0);
    func_004B9930(g_714248);
    func_0066777C(self + 0xc0, 0);
    func_002DF3E4(g_712588);
}
