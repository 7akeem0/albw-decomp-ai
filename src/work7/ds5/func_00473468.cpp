// 0x473468
extern "C" void func_00440CE4(void*);
extern "C" void func_0066F3FC(void*, int);
extern "C" int func_004B083C();
extern "C" void func_004EC690(void*, int, int);
extern void* data_00709DF8;
extern void* data_00711F50;
struct Cls {
    char pad1[0x160];
    unsigned char m160;
    void f();
};
void Cls::f() {
    func_00440CE4(this);
    func_0066F3FC((char*)this + 0xe4, 1);
    if (data_00709DF8 != 0 && func_004B083C() == 0) {
        func_004EC690(data_00711F50, 0, 0);
    }
    m160 = 0;
}
