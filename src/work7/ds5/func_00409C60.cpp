// 0x409C60
extern "C" void func_004135B4(void*);
extern "C" void func_004088FC(void*, void*);
extern "C" int func_0056AE28(void*);
extern "C" void func_0056ADA8(void*);
extern "C" void func_0041361C(void*, char*);
extern "C" int func_0056AEA0(void*);
extern "C" int func_0056AE68(void*);
extern "C" void func_00413628(void*, char*);
struct Cls {
    char pad[0x11c];
    void* m11c;
    int f(char* a);
};
int Cls::f(char* a) {
    func_004135B4((char*)this + 0x120);
    func_004088FC(this, (char*)this + 0x120);
    int r6 = func_0056AE28((char*)this + 0x120);
    func_0056ADA8((char*)this + 0x120);
    func_0041361C((char*)this + 0x120, a + r6);
    int r2 = func_0056AEA0((char*)this + 0x120);
    int r3 = func_0056AE68((char*)this + 0x120);
    if (r2 != -1 && r3 != -1) {
        func_00413628((char*)this + 0x120, a + r2);
    }
    m11c = a;
    return 1;
}
