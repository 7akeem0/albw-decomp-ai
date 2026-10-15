// 0x44DF84 / 0x44DFC4
extern "C" int func_00532C2C(void*);
extern "C" void func_00446980(void*, void*, unsigned char);
extern "C" void  func_0066CD9C(void*, int);
struct Cls {
    char pad[0x8c];
    char x8c[0x1c];
    char pad2[0x108 - 0xa8];
    unsigned char m108;
    char pad3[0x12c - 0x109];
    void* m12c;
    void f();
};
void Cls::f() {
    if (func_00532C2C((char*)this + 0x8c) >= 1) return;
    void* p = m12c;
    if (p != 0) {
        func_00446980(p, (char*)this + 0xe8, m108);
    }
    func_0066CD9C((char*)this + 0xb0, 0);
}
