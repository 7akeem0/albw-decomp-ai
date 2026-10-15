// 0x469738
extern "C" void func_00232468(void*);
extern "C" void func_002317C0(void*, float);
extern "C" void func_002313DC(void*);
struct Cls {
    char pad[0x88];
    unsigned char m88;
    void f();
};
void Cls::f() {
    func_00232468(this);
    unsigned char k = m88;
    if (k == 3 || k == 5) func_002313DC((char*)this + 0x38);
    else func_002317C0((char*)this + 0x38, 1.0f);
}
