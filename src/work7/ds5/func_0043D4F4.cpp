// 0x43D4F4
extern "C" int func_00556AF8(void*);
extern "C" int func_00556B94(void*);
extern "C" void func_0066C424(void*, int) __attribute__((weak));
extern void* data_0070FB60;
struct Cls {
    char pad1[0x174];
    short m174;
    char pad2[0x19c - 0x176];
    unsigned char m19C;
    void f();
};
void Cls::f() {
    if (m19C == 2) return;
    void* g = data_0070FB60;
    if (func_00556AF8(g) != 0) return;
    if (func_00556B94(g) != 0) return;
    short v = (short)(m174 + 1);
    m174 = v;
    if (v < 0xa0) return;
    func_0066C424((char*)this + 0x74, 0);
}
