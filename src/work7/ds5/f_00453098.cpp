// 0x453098
extern "C" void func_0012C790(void*);
struct Sub { char pad[0x48]; unsigned char m48; };
struct Cls {
    char pad[0x260];
    Sub* m260;
    Sub* m264;
    char pad2[0x280 - 0x268];
    unsigned char m280;
    void f();
};
void Cls::f() {
    if (m280 == 0) return;
    if (m260->m48 != 0) return;
    if (m264->m48 != 0) return;
    func_0012C790(m260);
    func_0012C790(m264);
    m280 = 0;
}
