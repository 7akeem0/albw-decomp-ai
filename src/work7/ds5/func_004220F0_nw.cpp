// 0x4220F0 -- vtable entry: base-then-subobject init.
extern "C" void func_00232468(void*);
extern "C" void func_0066BE5C(void*, int) ;

struct Cls {
    char pad[0x38];
    void f();
};

void Cls::f() {
    func_00232468(this);
    func_0066BE5C((char*)this + 0x38, 0);
}
