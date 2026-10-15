// 0x471FE0
extern "C" void func_00166C00(void*, int);
extern "C" int func_00532C78(void*);
extern "C" void func_00231448(void*);
extern "C" void func_002317C0(void*, float);
extern void* data_0070B850;
struct Cls { void f(); };
void Cls::f() {
    func_00166C00(data_0070B850, 0);
    if (func_00532C78((char*)this + 0xc8) != 0) return;
    func_00231448((char*)this + 0xc8);
    func_002317C0((char*)this + 0x2c, 1.0f);
}
