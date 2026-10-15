// 0x47031C
extern "C" int func_00532C78(void*);
extern "C" void func_00231448(void*);
extern "C" void  func_0066E304(void*, int);
struct Cls {
    char pad[0x74];
    char x74[0x4c];
    char x0c0[0xc];
    char x0cc[0x4];
    void f();
};
void Cls::f() {
    if (func_00532C78((char*)this + 0xc0) != 0) return;
    if (func_00532C78((char*)this + 0xcc) != 0) return;
    func_00231448((char*)this + 0xc0);
    func_0066E304((char*)this + 0x74, 0);
}
