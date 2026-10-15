extern "C" void func_00352210(void*, int, float);
struct Base;
struct Entry { void (Base::*pmf)(); };
struct Cls {
    char pad0[0x38];
    unsigned int cnt;
    signed char idx;
    char pad2[0xb];
    unsigned int ctx;
    Base* obj;
    unsigned int m8c;
    Entry* tbl;
    char pad58[6];
    unsigned char m5e;
    unsigned char m5f;
    void f();
};
void Cls::f() {
    m5e = 0;
    m5f = 0;
    Cls* s = this;
    (s->obj->*(s->tbl[s->idx].pmf))();
    unsigned int c = cnt + 1;
    cnt = c;
    if (ctx != 0) func_00352210((void*)ctx, 1, (float)c);
}
