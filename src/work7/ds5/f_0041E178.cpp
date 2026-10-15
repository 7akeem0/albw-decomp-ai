// 0x41E178
extern "C" void func_0010C0C0(void*);
extern "C" void func_0010C160(void*);
extern "C" void func_0041DBD0(void*, int);
extern "C" void* func_00412BB4();
extern "C" int func_00412C8C(void*, int);
extern "C" void func_00412EF4(void*, int);
struct Cls {
    char pad[4];
    char cs[0xc];
    void* m10;
    void f(int a);
};
void Cls::f(int a) {
    char* p = (char*)this + 4;
    func_0010C0C0(p);
    func_0041DBD0((char*)this + 0x10, a);
    void* r = func_00412BB4();
    func_00412EF4(r, func_00412C8C(r, 1));
    func_0010C160(p);
}
