// 0x41E0C0
extern "C" void func_0010C0C0(void*);
extern "C" void func_0010C160(void*);
extern "C" void* func_0041DB10(void*, void*, void*);
struct Cls {
    char pad[4];
    char cs[8];
    char pad2[0x10 - 0xc];
    void* m10;
    void* f(void* a, void* b);
};
void* Cls::f(void* a, void* b) {
    char* cs = (char*)this + 4;
    func_0010C0C0(cs);
    void* r = func_0041DB10((char*)this + 0x10, a, b);
    func_0010C160(cs);
    return r;
}
