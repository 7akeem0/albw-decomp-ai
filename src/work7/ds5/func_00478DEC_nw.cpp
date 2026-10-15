// 0x478DEC
extern "C" void func_0066E7A0(void*, signed char) ;

struct Cls {
    char pad[0x30c];
    unsigned char m30c;
    void f();
};
void Cls::f() {
    m30c = 0;
    func_0066E7A0((char*)this + 0xcc, 1);
}
