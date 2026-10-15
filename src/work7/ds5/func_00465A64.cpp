// 0x465A64
extern "C" void func_00466004(void*);

struct Cls {
    char pad[0x12b];
    unsigned char m12b;
    unsigned char m12c;
    void f();
};
void Cls::f() {
    func_00466004(this);
    m12c = 0;
    m12b = 0;
}
