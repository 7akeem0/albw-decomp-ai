// 0x42892C -- forward a float to a sub-object's rate.
extern "C" void func_0012F080(void*, float, float);

struct Obj {
    char pad[0x104];
    float m104;
};

struct Cls {
    char pad0[4];
    Obj* m4;
    void f(float x);
};

void Cls::f(float x) {
    Obj* o = m4;
    if (!o)
        return;
    func_0012F080(o, o->m104, x);
}
