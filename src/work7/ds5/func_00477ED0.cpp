// 0x477ED0
extern "C" void func_001B6C2C(void*);

struct Cls {
    char pad[0x1f4];
    void* m1f4;
    void* m1f8;
    void f();
};
void Cls::f() {
    func_001B6C2C(m1f4);
    func_001B6C2C(m1f8);
}
