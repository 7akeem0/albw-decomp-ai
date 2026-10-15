// 0x457008
extern "C" int func_00532C78(void*);
extern "C" void  func_0066D544(void*, int);
struct Cls {
    void f();
};
void Cls::f() {
    if (func_00532C78((char*)this + 0x140) != 0) return;
    if (func_00532C78((char*)this + 0xf8) != 0) return;
    if (func_00532C78((char*)this + 0x104) != 0) return;
    if (func_00532C78((char*)this + 0x110) != 0) return;
    unsigned int i = *(unsigned int*)((char*)this + 0x230);
    char* base = (char*)this + 0x1e4;
    if (i < 3) base += i * 4;
    void* p = *(void**)base;
    if (((unsigned char*)p)[0xcc] != 0) return;
    func_0066D544((char*)this + 0x17c, 0);
}
