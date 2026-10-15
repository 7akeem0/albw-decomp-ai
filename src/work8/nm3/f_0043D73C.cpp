// 0x43D73C
extern "C" void func_0043C6E4(void*);
extern "C" void func_0043D388(void*);
extern "C" void func_0047AE54(void*);
extern "C" void func_0014AE1C(void*, int);
extern "C" void func_004EC62C(void*);
extern void* data_00712468;
extern void* data_00711F50;
struct Cls {
    char pad1[0x18];
    int m18;
    char pad2[0x158 - 0x1c];
    void* m158;
    void f();
};
void Cls::f() {
    func_0043C6E4(this);
    func_0043D388(this);
    func_0047AE54(m158);
    m18 &= ~0x40;
    func_0014AE1C(data_00712468, 0);
    func_004EC62C(data_00711F50);
}
