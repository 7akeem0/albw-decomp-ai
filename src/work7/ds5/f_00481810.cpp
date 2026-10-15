// 0x481810
extern "C" void func_004816B4(void*);
extern unsigned int ro_006A5F2C[];
struct Cls {
    char pad[0xe];
    unsigned char m0e;
    char pad2[0x88 - 0xf];
    unsigned int m88;
    unsigned int m8c;
    char pad3[0x94 - 0x90];
    int m94;
    void f(int a);
};
void Cls::f(int a) {
    m94 = -1;
    unsigned int x, y;
    if (a != 0) {
        x = ro_006A5F2C[0];
        y = ro_006A5F2C[1];
    } else {
        x = ro_006A5F2C[2];
        y = ro_006A5F2C[3];
    }
    m8c = y;
    m88 = x;
    func_004816B4(this);
    m0e = 1;
}
