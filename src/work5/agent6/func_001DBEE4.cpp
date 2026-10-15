typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8; typedef float f32; typedef short s16;
struct Base320 { virtual void b0(); };
struct Obj324 {};
struct Param28 {
    Param28(const char* name, Base320* owner);   // 0x3529A0
    char pad[0x14];
    s32 m14;
    char pad18[0x28 - 0x18];
};
struct Model600;
void func_0028BF6C(Model600* m, Obj324* o, Param28* p);
void func_003525AC(Obj324* o, Param28* p, void* x);
struct Cls {
    virtual void vf0();
    void func_001DBEE4();
    char pad[0x320 - 4];
    Base320 m320;
    Obj324 m324;
    char pad325[0x358 - 0x325];
    s16 m358;
    s16 m35a;
    char pad35c[0x408 - 0x35c];
    void* m408;
    char pad40c[0x600 - 0x40c];
    Model600* m600;
};
void Cls::func_001DBEE4() {
    m358 = 0x160;
    m35a = 0xb2;
    Param28 p("PlayerObject", &m320);
    func_0028BF6C(m600, &m324, &p);
    p.m14 = 3;
    func_003525AC(&m324, &p, m408);
}
