// 0x44F448
extern "C" void func_00232468(void*);
extern "C" void func_002317C0(void*, float);
struct Cls { void f(); };
void Cls::f() {
    func_00232468(this);
    func_002317C0((char*)this + 0x74, 1.0f);
}
