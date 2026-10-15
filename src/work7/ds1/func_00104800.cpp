typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void func_0010C0C0(void*);
extern "C" void func_0010C160(void*);
extern "C" int func_0010293C(const char*);
extern "C" int data_00716178;
extern "C" u8 bss_007A3330[];
extern "C" char ro_006B4964[];

int func_00104800() {
    u8* lk = bss_007A3330;
    func_0010C0C0(lk);
    if (data_00716178 > 0) {
        data_00716178 = data_00716178 + 1;
        int r = 0x082067f9;
        func_0010C160(lk);
        return r;
    }
    int r = func_0010293C(ro_006B4964);
    func_0010C160(lk);
    return r;
}
