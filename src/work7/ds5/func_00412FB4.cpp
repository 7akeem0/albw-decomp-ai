// 0x412FB4
extern "C" void func_006766E8(void*);

struct Cls {
    void f();
};
void Cls::f() {
    func_006766E8(this);
    func_006766E8((char*)this + 0xb4);
    ((unsigned char*)this)[0x18d] = 0;
}
