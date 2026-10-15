// 0x44E004
extern "C" int func_00532C78(void*);
extern "C" void func_0066CD9C(void*, int) ;
struct Cls {
    char pad1[0xe0];
    float mE0, mE4, mE8, mEC;
    void f();
};
void Cls::f() {
    if (mE8 != mE0) return;
    if (mEC != mE4) return;
    if (func_00532C78((char*)this + 0x74) != 0) return;
    func_0066CD9C((char*)this + 0xb0, 0xc);
}
