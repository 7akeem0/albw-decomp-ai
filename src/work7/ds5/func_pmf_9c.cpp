// PMF family A=0x9c
extern "C" void func_00352210(void*, int, float);
struct Base;
struct Entry { void (Base::*pmf)(); };
struct Cls {
    char pad0[0x98];
    unsigned int cnt;
    signed char idx;
    char pad2[0xb];
    unsigned int ctx;
    Base* obj;
    unsigned int m8c;
    Entry* tbl;
    void f();
};
void Cls::f() {
    (obj->*(tbl[idx].pmf))();
    unsigned int c = cnt + 1;
    cnt = c;
    if (ctx != 0) func_00352210((void*)ctx, 1, (float)c);
}
