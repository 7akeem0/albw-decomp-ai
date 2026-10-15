// 0x4745A8
extern "C" void func_001B6C04(void*);
extern "C" void func_002317C0(void*, float);
struct Cls { void f(); };
void Cls::f() {
    func_001B6C04(this);
    func_002317C0((char*)this + 0x74, 1.0f);
}
