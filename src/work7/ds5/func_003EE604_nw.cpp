// 0x3EE604
extern "C" void func_003F6740(void*, int) ;
struct Cls {
    char pad[0x44];
    float m44, m48, m4c;
    float m50, m54, m58;
    void f();
};
void Cls::f() {
    m44 += m50;
    m48 += m54;
    m4c += m58;
    func_003F6740(this, 1);
}
