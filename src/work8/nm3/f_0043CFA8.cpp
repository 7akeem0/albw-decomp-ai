// 0x43CFA8
extern "C" void func_0014AE1C(void*, int);
extern "C" void func_004EC62C(void*);
extern "C" void func_0043C6E4(void*);
extern "C" void func_0043D388(void*);
extern void* data_00712468;
extern void* data_00711F50;
struct Cls {
    char pad1[0x18];
    int m18;
    char pad2[0x70 - 0x1c];
    unsigned char m70;
    void f();
};
void Cls::f() {
    m70 = 0;
    m18 &= ~0x40;
    func_0014AE1C(data_00712468, 0);
    func_004EC62C(data_00711F50);
    func_0043C6E4(this);
    func_0043D388(this);
}
