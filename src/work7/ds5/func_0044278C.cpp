// 0x44278C / 0x442A5C
extern "C" void func_002317C0(void*, float);
extern "C" void func_00231448(void*);
struct Sub {
    char pad[0x20];
    unsigned short m20;
    char pad2[0x2c - 0x22];
    float m2c;
    char pad3[0x48 - 0x30];
    unsigned char m48;
    unsigned char m49;
};
struct Cls {
    char pad[0xbc];
    Sub* m0bc;
    Sub* m0c0;
    void f();
};
void Cls::f() {
    Sub* a = m0c0;
    if (a->m48 == 0) {
        a->m20 = 0;
        func_002317C0(&a->m20, 1.0f);
        a->m48 = 1;
    }
    func_002317C0(&a->m2c, 1.0f);
    a->m49 = 0;
    Sub* b = m0bc;
    if (b->m48 != 0) {
        b->m20 = 2;
        func_002317C0(&b->m20, 1.0f);
        b->m48 = 0;
    }
    func_00231448(&b->m2c);
    b->m49 = 0;
}
