// 0x47D440
extern "C" void func_00232468(void*);
extern "C" void func_00231448(void*);
extern "C" void func_002313DC(void*);
struct Cls { void f(); };
void Cls::f() {
    func_00232468(this);
    func_00231448((char*)this + 0x20);
    func_002313DC((char*)this + 0x2c);
}
