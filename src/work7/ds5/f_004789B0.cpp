// 0x4789B0
extern "C" void func_004CDF40(void*, int, int);
extern "C" void func_0066C0CC(void*, int) __attribute__((weak));
extern void* data_0070B728;

struct Ctrl {
    char pad[0x24];
    signed char m24;
    char pad2[0x79 - 0x25];
    unsigned char m79;
};
struct Cls {
    char pad[0x208];
    Ctrl* m208;
    void f();
};
void Cls::f() {
    func_004CDF40(data_0070B728, 0x384, 1);
    Ctrl* p = m208;
    p->m79 = 1;
    if (p->m24 == 0) func_0066C0CC((char*)p + 0x20, 1);
}
