// 0x428948
extern "C" void func_0012F080(void*, float, float);

struct Obj {
    char pad[0x104];
    float m104;
};
struct Cls {
    char pad0[4];
    Obj* m4;
    char pad2[0xc - 8];
    float mC;
    void f();
};
void Cls::f() {
    Obj* o = m4;
    if (!o) return;
    func_0012F080(o, o->m104, mC);
}
