// 0x45E438
extern "C" void func_002317C0(void*, float);
struct Obj { char pad1[0x1c]; float x, y, z; char pad2[0x44 - 0x28]; unsigned char m44; };
struct Cls {
    char pad1[0x134];
    short m134;
    char pad2[0x150 - 0x136];
    Obj* m150;
    char pad3[0x160 - 0x154];
    float m160;
    void f();
};
void Cls::f() {
    m160 = 0.0f;
    m134 = 0;
    func_002317C0((char*)this + 0x134, 1.0f);
    float v = m160;
    Obj* o = m150;
    o->x = -v;
    o->y = 0.0f;
    o->z = 0.0f;
    o->m44 = (o->m44 & 0xef) | 0x10;
}
