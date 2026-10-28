
extern void* data_00716238;
extern "C" void func_003F6A8C(void*);
extern "C" void func_003F6E1C(void*);
struct S {
    char pad[0x60];
    unsigned int m60, m64, m68, m6c;
};
struct V3 { unsigned int a, b, c; };
struct Cls {
    char pad[0x38];
    V3 m38;
    void f();
template<class T0, class T1> void hlp0(T0& g, T1& v) { g->m68 = v.a;
    g->m60 = v.c;
    g->m64 = v.b; }
};
void Cls::f() {
    V3 v = m38;
    S* g = (S*)data_00716238; 
    hlp0(g, v);
 g->m6c = 0;
    func_003F6A8C(this);
    func_003F6E1C(this);
}
