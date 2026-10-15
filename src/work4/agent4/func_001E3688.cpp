typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
struct Obj30 { char pad[0x1c]; u32 m1c; };
struct X {
    u16 m0;
    u16 m2;
    char pad4[4];
    u32 m8;
    char padc[0x30 - 0xc];
    Obj30* m30;
    char pad34[0x74 - 0x34];
    u8 m74;
    void f();
};
void func_002317C0(X* x, float f);
void X::f() {
    m8 = m30->m1c;
    m2 = 3;
    m0 = 0;
    func_002317C0(this, 1.0f);
    m74 &= ~2;
}
