typedef unsigned char u8;
typedef unsigned int u32;

extern "C" int func_0010179C(void*);
extern "C" void func_001015FC(void*, int);
extern "C" int func_0010190C(int, int, int);
extern "C" u8 data_00714838[];
extern "C" u8 bss_0079CC38[];

int func_00100C38(u32 a) {
    if (func_0010179C((void*)a)) return 0;
    a &= ~7u;
    data_00714838[3] = 1;
    func_001015FC(bss_0079CC38, 0x100);
    int r = func_0010190C(0x300, (int)a, 0xf);
    if ((r & (int)0x80000000) < 0) return r;
    return 0;
}
