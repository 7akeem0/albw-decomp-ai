// 0x483044
extern "C" void func_001B6D40(void*);
extern "C" void func_001E3328(void*);
extern void* data_007142C8;
struct GObj { char pad[0x130]; void* m130; };
struct Cls { void f(); };
void Cls::f() {
    func_001B6D40(this);
    func_001E3328(((GObj*)data_007142C8)->m130);
}
