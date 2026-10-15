// 0x441DFC
extern "C" int func_00532C78(void*);
extern "C" void  func_0066C88C(void*, int);
struct Cls {
    void f();
};
void Cls::f() {
    if (func_00532C78((char*)this + 0x8c) != 0) return;
    if (func_00532C78((char*)this + 0x74) != 0) return;
    if (func_00532C78((char*)this + 0x80) != 0) return;
    func_0066C88C((char*)this + 0x98, 5);
}
