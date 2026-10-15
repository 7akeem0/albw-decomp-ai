// 0x46DBE4
extern "C" void func_0046D984(void*, void*, int, int);
struct Sub { char pad1[0x2c]; int m2C; int m30; int m34; };
struct Cls {
    char pad1[0xa8];
    Sub* mA8;
    char pad2[0xbc - 0xac];
    void* mBC;
    void* mC0;
    void f();
};
void Cls::f() {
    Sub* p = mA8;
    int v = p->m2C >= 0 ? p->m30 : -1;
    func_0046D984(this, mBC, v, 1);
    Sub* q = mA8;
    int w = q->m2C >= 0 ? q->m34 : -1;
    func_0046D984(this, mC0, w, 0);
}
