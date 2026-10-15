// 0x46982C
extern "C" int func_00532C78(void*);
extern "C" int func_00556E7C(void*, int);
extern "C" void func_002317C0(void*, float);
extern void* data_0070FB60;
struct Cls { void f(); };
void Cls::f() {
    if (func_00532C78((char*)this + 0x5c) != 0) return;
    if (func_00556E7C(data_0070FB60, 0x86) == 0) return;
    func_002317C0((char*)this + 0x5c, 1.0f);
}
