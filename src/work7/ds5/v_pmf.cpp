// PMF family variants
extern "C" void func_00352210(void*, int, float);
struct Base;
struct Entry { void (Base::*pmf)(); };
struct Cls {
    char pad[0x74];
    unsigned int m74;
    signed char m78;
    char pad2[0x84 - 0x79];
    unsigned int m84;
    Base* m88;
    unsigned int m8c;
    Entry* m90;
    void a();
    void b();
    void c();
    void d();
};
void Cls::a() {
    (m88->*(m90[m78].pmf))();
    unsigned int c = m74 + 1;
    m74 = c;
    if (m84 != 0) func_00352210((void*)m84, 1, (float)c);
}
void Cls::b() {
    Entry e = m90[m78];
    void (Base::*pmf)() = e.pmf;
    (m88->*pmf)();
    unsigned int c = m74 + 1;
    m74 = c;
    if (m84 != 0) func_00352210((void*)m84, 1, (float)c);
}
void Cls::c() {
    signed char idx = m78;
    Base* obj = m88;
    Entry* tbl = m90;
    void (Base::*pmf)() = tbl[idx].pmf;
    (obj->*pmf)();
    unsigned int c = m74 + 1;
    m74 = c;
    if (m84 != 0) func_00352210((void*)m84, 1, (float)c);
}
void Cls::d() {
    signed char idx = m78;
    Entry* tbl = m90;
    Base* obj = m88;
    void (Base::*pmf)();
    pmf = tbl[idx].pmf;
    (obj->*pmf)();
    unsigned int c = m74 + 1;
    m74 = c;
    if (m84 != 0) func_00352210((void*)m84, 1, (float)c);
}
