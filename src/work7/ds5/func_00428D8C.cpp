// 0x428D8C
extern "C" void func_00232478(void*);
extern "C" void func_002317C0(void*, float);

struct Cls {
    void f();
};
void Cls::f() {
    func_00232478(this);
    func_002317C0((char*)this + 0x20, 1.0f);
}
