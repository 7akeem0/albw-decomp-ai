// 0x44DB34
extern "C" void func_00231448(void*);
extern "C" void func_00448700(void*);
static inline void chk(void* p) { if (p) func_00448700(p); }
struct Cls {
    char pad[0x18];
    unsigned int m18;
    char pad2[0x108 - 0x1c];
    unsigned char m108;
    char pad3[0x12c - 0x109];
    void* m12c;
    void f();
};
void Cls::f() {
    func_00231448((char*)this + 0x8c);
    func_00231448((char*)this + 0x74);
    void* p = m12c;
    m108 = 1;
    chk(p);
    m18 |= 4;
}
