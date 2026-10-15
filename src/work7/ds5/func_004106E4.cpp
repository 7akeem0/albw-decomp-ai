// 0x4106E4
struct Cls {
    void* m0;
    void* m4;
    unsigned char m8;
    void f();
};
void Cls::f() {
    if (m8) {
        m0 = 0;
        m4 = 0;
        m8 = 0;
    }
}
