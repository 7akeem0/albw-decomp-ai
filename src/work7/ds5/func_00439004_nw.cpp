// 0x439004
extern "C" void func_0066C2E0(void*, int) ;
struct Cls {
    char pad[0xc8];
    int mC8;
    char pad2[0x1b4 - 0xcc];
    int m1B4;
    void f();
};
void Cls::f() {
    if (mC8 < 0x18) return;
    if (m1B4 == -1) func_0066C2E0((char*)this + 0xc8, 1);
    else func_0066C2E0((char*)this + 0xc8, 6);
}
