// 0x45F114
extern "C" void func_00440CC0(void*);
extern "C" void func_002317C0(void*, float);
struct Cls { void f(); };
void Cls::f() {
    func_00440CC0(this);
    func_002317C0((char*)this + 0xe4, 1.0f);
}
