// 0x43C0F0 / 0x43D7EC / 0x43D830 variants
extern "C" void f445EDC(void*);
extern "C" void f2BF358(void*);
extern "C" void f448E30(void*);
extern "C" void f448ECC(void*);
extern "C" void f46769C(void*);
struct Cls {
    char pad[0x148];
    void* m148;
    char pad2[0x154 - 0x14c];
    void* m154;
    void* m150s;  // placeholder
    void a();
    void b();
    void c();
};
struct Cls2 {
    char pad[0x148];
    void* m148;
    void* m14c;
    void* m150;
    void* m154;
    void a();
    void b();
    void c();
};
void Cls2::a() {
    void* x = m154;
    if (x != 0 && m148 == x) { f445EDC(x); return; }
    void* y = m150;
    if (y != 0 && m148 == y) { f2BF358(y); return; }
}
void Cls2::b() {
    void* x = m154;
    if (x != 0 && m148 == x) { f448E30(x); return; }
    void* y = m150;
    if (y != 0 && m148 == y) { f2BF358(y); return; }
}
void Cls2::c() {
    void* x = m154;
    if (x != 0 && m148 == x) { f448ECC(x); return; }
    void* y = m150;
    if (y != 0 && m148 == y) { f46769C(y); return; }
}
