// 0x403F7C
extern "C" void func_0041F734(void*, int, void*);
struct Obj {
    char pad1[0xb0];
    void* mB0;
    char pad2[0xc0 - 0xb4];
    void* mC0;
};
struct Cls {
    void f(int a, Obj* o, int z);
};
void Cls::f(int a, Obj* o, int z) {
    void** vt = *(void***)this;
    int res = ((int(*)(void*, int, int))vt[3])(this, a, z);
    o->mB0 = 0;
    o->mC0 = this;
    if ((z & 1) == 0) func_0041F734(this, res, (char*)o + 4);
}
