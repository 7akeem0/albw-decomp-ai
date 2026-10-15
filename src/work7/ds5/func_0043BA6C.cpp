// 0x43BA6C
extern "C" void func_001B6DE0(void*);
extern "C" void func_00231448(void*);

struct Cls {
    char pad[0x8c];
    unsigned char m8c;
    void f();
};
void Cls::f() {
    func_001B6DE0(this);
    func_00231448((char*)this + 0x74);
    m8c = 0;
}
