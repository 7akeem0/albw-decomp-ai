// 0x43BDAC
extern "C" void func_001B6DE0(void*);
extern "C" void func_00231448(void*);
extern "C" void  func_00167E04(void*, void*, int);
struct Cls {
    char pad[0x1c];
    void* m1c;
    char pad2[0x74 - 0x20];
    char x74[0xc];
    unsigned int m80;
    unsigned int m84;
    void f();
};
void Cls::f() {
    func_001B6DE0(this);
    func_00231448((char*)this + 0x74);
    func_00167E04(m1c, (void*)m80, 0);
    func_00167E04(m1c, (void*)m84, 0);
    char* p = (char*)this + 0x1c;
    func_00167E04(*(void**)p, *(void**)(p + 0x6c), 1);
}
