// 0x437F74
extern "C" void func_00231448(void*);
extern "C" void func_001B6D40(void*);

struct Cls {
    void f();
};

void Cls::f() {
    func_00231448((char*)this + 0x80);
    func_001B6D40(this);
}
