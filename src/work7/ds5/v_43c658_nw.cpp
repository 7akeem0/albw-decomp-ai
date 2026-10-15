// 0x43C658 variants
extern "C" void  func_0066C424(void*, int);
struct Ctl {
    char pad[0x300];
    char pad2[0xb];
    signed char m0b;
};
struct Cls {
    char pad[0x98];
    char pad2[0x158 - 0x98];
    Ctl* m158;
    void v1();
    void v2();
    void v3();
    void v4();
    void v5();
    void v6();
    void v7();
};
void Cls::v1() { signed char v = m158->m0b; if (v >= 0) return; func_0066C424((char*)this + 0x98, 3); }
void Cls::v2() { signed char v = m158->m0b; if (v < 0) { func_0066C424((char*)this + 0x98, 3); } }
void Cls::v3() { if (m158->m0b < 0) func_0066C424((char*)this + 0x98, 3); }
void Cls::v4() { signed char v = m158->m0b; if ((v & 0x80000000) == 0) return; func_0066C424((char*)this + 0x98, 3); }
void Cls::v5() { signed char v = m158->m0b; if ((v >> 31) == -1) { func_0066C424((char*)this + 0x98, 3); } }
void Cls::v6() { signed char v = m158->m0b; if ((v >> 31) != 0) { func_0066C424((char*)this + 0x98, 3); } }
void Cls::v7() { signed char v = m158->m0b; int m = v >> 31; if (m == -1) func_0066C424((char*)this + 0x98, 3); }
