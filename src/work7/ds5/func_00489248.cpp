// 0x489248
extern "C" void func_001B6DE0(void*);

struct Cls {
    char pad[0x80];
    void* m80;
    unsigned char m84;
    void f();
};
void Cls::f() {
    func_001B6DE0(this);
    m84 = 0;
    m80 = 0;
}
