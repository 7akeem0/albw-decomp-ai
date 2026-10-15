// 0x43C48C
extern "C" void func_0044A9F8();
extern "C" void func_00476CA0(void*, int);
extern void* data_00709DF8;
extern void* data_007142C8;
struct Cls {
    char pad1[0x148];
    void* m148;
    char pad2[0x154 - 0x14c];
    void* m154;
    void* m158;
    void f();
};
void Cls::f() {
    if (data_00709DF8 == 0) return;
    signed char k = *(signed char*)((char*)data_00709DF8 + 0x18);
    if ((unsigned)(k - 9) <= 0xc) return;
    void* x = m154; if (x != m148) return;
    func_0044A9F8();
    func_00476CA0(m158, 0);
    unsigned short* p = (unsigned short*)((char*)data_007142C8 + 0x33e);
    *p &= ~0x218;
}
