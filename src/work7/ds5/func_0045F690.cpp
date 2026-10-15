// 0x45F690
extern "C" void func_001B6C04(void*);
extern "C" void func_002313DC(void*);
extern "C" void func_00231524(void*);
struct Cls { void f(); };
void Cls::f() {
    func_001B6C04(this);
    func_002313DC((char*)this + 0x100);
    func_00231524((char*)this + 0x10c);
}
