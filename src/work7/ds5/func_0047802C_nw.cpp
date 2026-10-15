// 0x47802C
extern "C" void func_0066E7A0(void*, signed char) ;
struct Sub { char pad[0x3c]; signed char m3c; };
struct Cls {
    char pad[0x1f4];
    Sub* m1F4;
    Sub* m1F8;
    void f();
};
void Cls::f() {
    if ((unsigned)(m1F4->m3c - 1) <= 5u) return;
    if ((unsigned)(m1F8->m3c - 1) <= 5u) return;
    func_0066E7A0((char*)this + 0xcc, 0);
}
