// 0x420C9C
struct Cls {
    void* m0;
    char pad[0x24];
    unsigned char m28;
    void f();
};

void Cls::f() {
    if (m28) {
        m0 = 0;
        m28 = 0;
    }
}
