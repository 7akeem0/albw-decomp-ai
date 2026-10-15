// 0x417F8C variants
extern "C" unsigned int func_0041D840(void*);
extern "C" unsigned int func_0041D524(unsigned int);
extern "C" void func_00112364(void*, void*, void*);
struct Cls {
    char pad[4];
    char x4[4];
    unsigned int a();
    unsigned int b();
};
unsigned int Cls::a() {
    unsigned int x = func_0041D840(this);
    unsigned int r = x ? func_0041D524(x) : 0;
    void* a0 = (char*)this + 4;
    void* a1 = (char*)this + 8;
    void* a2 = (char*)r + 0x1a8;
    func_00112364(a0, a1, a2);
    return r;
}
unsigned int Cls::b() {
    unsigned int x = func_0041D840(this);
    unsigned int r = x ? func_0041D524(x) : 0;
    func_00112364((char*)this + 4, (char*)this + 8, (char*)r + 0x1a8);
    return r;
}
