// 0x479F9C
extern "C" void func_00231524(void*);
extern "C" void func_002317C0(void*, float);
extern "C" void func_00231598(void*);
extern "C" void func_0066C0CC(void*, int) ;

struct Ctrl {
    char pad[0x24];
    signed char m24;
};
struct Cls {
    char pad[0x208];
    Ctrl* m208;
    void f();
};
void Cls::f() {
    func_00231524((char*)this + 0x1d0);
    func_002317C0((char*)this + 0x1e8, 1.0f);
    func_00231598(this);
    Ctrl* p = m208;
    if (p->m24 == 2) func_0066C0CC((char*)p + 0x20, 6);
}
