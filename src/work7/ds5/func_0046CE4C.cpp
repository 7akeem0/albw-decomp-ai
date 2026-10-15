// 0x46CE4C
extern "C" int func_0034BB9C(void*);
extern "C" int func_0058DCB8(void*);
extern "C" void __attribute__((weak)) func_0066E07C(void*, int);
extern void* data_007142C8;
struct Cls {
    char pad[0x74];
    char x74[0x40];
    void* m0b4;
    void f();
};
void Cls::f() {
    if (func_0034BB9C(m0b4) == 0) return;
    void* g = data_007142C8;
    if (func_0058DCB8(g) == 0) return;
    func_0066E07C((char*)this + 0x74, 2);
}
