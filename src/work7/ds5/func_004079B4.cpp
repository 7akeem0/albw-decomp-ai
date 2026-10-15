// 0x4079B4
extern "C" void func_00412924(void*, void*);
struct Cls {
    char pad1[4];
    int m4;
    char pad2[0x48 - 8];
    float m48;
    float m4C;
    float m50;
    unsigned char m54;
    unsigned char m55;
    void f();
};
void Cls::f() {
    if (m55 != 0) return;
    for (int i = 0; i < 4; i++) {
        func_00412924((char*)this + i * 16 + 8, this);
    }
    m55 = 1;
    m54 = 0;
    m4 = 0;
    m4C = 1.0f;
    m50 = 0.0f;
    m48 = 1.0f;
}
