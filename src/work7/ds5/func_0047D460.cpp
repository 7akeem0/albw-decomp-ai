// 0x47D460
extern "C" void func_001B6C04(void*);
extern "C" void func_002313DC(void*);
extern "C" void func_00231448(void*);
struct Cls { void f(); };
void Cls::f() {
    func_001B6C04(this);
    func_002313DC((char*)this + 0x44);
    func_00231448((char*)this + 0x2c);
}
