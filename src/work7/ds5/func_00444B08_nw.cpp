// 0x444B08
extern "C" void func_0066CB14(void*, int) ;
struct Elem {
    char pad1[0xd];
    signed char mD;
    unsigned char mE;
    char pad2[0x40 - 0xf];
    int m40;
    int m44;
    char pad3[0x54 - 0x48];
};
struct Cls {
    char pad1[0xc4];
    Elem arr[12];
    char pad2[0x4ba - 0x4b4];
    unsigned char m4BA;
    void f();
};
void Cls::f() {
    unsigned idx = m4BA;
    char* p = (char*)this + 0xc4;
    if (idx < 12) p += idx * 84;
    Elem* e = (Elem*)p;
    if (!(e->mD == 0 && e->mE == 0)) {
        if (!(e->m44 == e->m40 && e->mD == 3)) return;
        if (e->mE != 3) return;
    }
    func_0066CB14((char*)this + 0x74, 6);
}
