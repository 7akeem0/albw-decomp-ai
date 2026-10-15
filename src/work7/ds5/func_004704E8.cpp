// 0x4704E8
extern "C" void func_00367DB4(void*);
extern "C" int func_0055FA60(void*);
extern "C" void func_002317C0(void*, float);
struct Sub { short m0; short m2; char pad[4]; int m8; };
struct Cls {
    char pad1[0x18];
    int m18;
    char pad2[0xc0 - 0x1c];
    Sub mC0;
    char pad3[0xe0 - 0xcc];
    void* mE0;
    void f();
};
void Cls::f() {
    *(int*)((char*)this + 0x18) &= ~0x80;
    func_00367DB4(mE0);
    if ((unsigned)func_0055FA60(mE0) < 2) {
        Sub* p = &mC0;
        *(int*)((char*)this + 0xc8) = *(int*)((char*)this + 0x1c);
        p->m2 = 7;
        p->m0 = 0;
        func_002317C0(p, 1.0f);
    }
}
