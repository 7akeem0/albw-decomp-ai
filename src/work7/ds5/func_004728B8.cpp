// 0x4728B8
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*, float);
struct Cls { char pad[0x60]; unsigned short m60; void f(); };
void Cls::f() {
    func_00231448((char*)this + 0x84);
    func_00231448((char*)this + 0x90);
    func_00231448((char*)this + 0x6c);
    func_00231448((char*)this + 0x78);
    m60 = 2;
    func_002317C0((char*)this + 0x60, 1.0f);
}
