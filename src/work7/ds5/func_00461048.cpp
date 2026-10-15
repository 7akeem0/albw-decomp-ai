// 0x461048
extern "C" void func_001B6C04(void*);
extern "C" void func_004610A0(void*, int);
struct Obj {
    char pad1[0x1c];
    float x, y, z;
    char pad2[0x44 - 0x28];
    unsigned char m44;
};
struct Cls {
    char pad1[0x1c];
    void* m1C;
    void f();
};
void Cls::f() {
    func_001B6C04(this);
    func_004610A0(this, 0);
    Obj* o = *(Obj**)(*(char**)m1C + 0x10);
    o->x = -15.0f;
    o->y = 16.0f;
    o->z = 0.0f;
    o->m44 = (o->m44 & 0xef) | 0x10;
}
