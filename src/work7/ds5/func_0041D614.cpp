// 0x41D614
extern "C" void func_00110490(void*, int);
extern "C" void func_004136CC();
extern "C" void func_004136EC();
extern "C" void func_00413708();
extern "C" void func_00413768();
extern "C" void func_0041376C();
extern char bss_007A3578[];
void f() {
    func_00110490(bss_007A3578, 0x200);
    void** p = (void**)bss_007A3578;
    p[0] = (void*)func_0041376C;
    p[1] = (void*)func_00413708;
    p[2] = (void*)func_00413768;
    p[3] = (void*)func_004136EC;
    p[4] = (void*)func_004136CC;
}
