// 0x410E38
extern "C" void func_0010C1B8(void*);
extern "C" void func_003C8BD8(int);
extern "C" void func_00413634(void*);
extern "C" void func_00408B7C(void*);
struct Cls {
    char pad1[0x120];
    int m120;
    char pad2[0x190 - 0x124];
    unsigned char m190;
    void f();
};
void Cls::f() {
    if (m190 != 0) {
        int v = m120;
        if ((v & ~1) != 0) {
            if (v & 1) func_0010C1B8((void*)v);
            v = m120;
            func_003C8BD8(v & ~1);
            m120 = 0;
        }
        func_00413634((char*)this + 0x13c);
        m190 = 0;
    }
    func_00408B7C(this);
}
