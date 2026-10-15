// 0x448354
extern "C" void func_0066CC58(void*, int);
struct Elem { char pad[0x35]; unsigned char m35; };
struct Sub { char pad[8]; int m8; char* mC; };
struct Cls {
    char pad1[0x1c];
    Sub* m1C;
    char pad2[0xca - 0x20];
    short mCA;
    char pad3[0x158 - 0xcc];
    void* m158;
    char pad4[0x295 - 0x15c];
    unsigned char m295;
    void f();
};
void Cls::f() {
    short idx = mCA;
    Sub* c = m1C;
    if (idx < 0) {
        func_0066CC58((char*)this + 0x158, 0);
    } else {
        Elem* e = (unsigned)c->m8 > (unsigned)idx
                      ? (Elem*)(c->mC + idx * 0x38)
                      : (Elem*)c->mC;
        if (e->m35 == 0) func_0066CC58((char*)this + 0x158, 0);
    }
    m295 = 1;
}
