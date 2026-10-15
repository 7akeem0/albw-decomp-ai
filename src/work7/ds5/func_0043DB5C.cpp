// 0x43DB5C
struct Cls {
    char pad[0x148];
    void* m148;
    char pad2[0x154 - 0x14c];
    void* m154;
    char pad3[0x16c - 0x158];
    unsigned char m16c;
    void f();
};
void Cls::f() {
    if (m154) {
        if (m148 == m154) m16c = 1;
    }
}
