// 0x4728FC
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*, float);
struct Cls { void f(); };
void Cls::f() {
    func_00231448((char*)this + 0x84);
    func_00231448((char*)this + 0x90);
    func_00231448((char*)this + 0x78);
    func_00231448((char*)this + 0x60);
    func_002317C0((char*)this + 0x6c, 1.0f);
}
