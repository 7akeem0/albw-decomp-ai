// 0x487A88
extern "C" void func_002317C0(void*, float);
extern "C" int func_004B083C();
extern "C" void func_004EC8E8(void*);
extern "C" void func_00231448(void*);
extern "C" void func_00440E38(void*);
extern void* data_00709DF8;
extern void* data_00711F50;
struct Cls {
    char pad1[0x108];
    char m108;
    char pad2[0x138 - 0x109];
    void* m138;
    void f();
};
void Cls::f() {
    void* p = m138;
    if (p != 0) {
        *(short*)p = 2;
        func_002317C0(m138, 1.0f);
    }
    if (data_00709DF8 != 0 && func_004B083C() == 0) {
        func_004EC8E8(data_00711F50);
    }
    func_00231448((char*)this + 0x108);
    func_00440E38(this);
}
