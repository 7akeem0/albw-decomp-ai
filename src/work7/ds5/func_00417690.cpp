// 0x417690
struct Cls {
    char pad0[5];
    unsigned char m5;
    char pad1[0x78 - 6];
    unsigned char m78;
    char pad2[0x7c - 0x79];
    int m7c;
    unsigned char m80;
    void f();
};
void Cls::f() {
    m80 = 0;
    m78 = 0;
    m7c = 0;
    m5 = 1;
}
