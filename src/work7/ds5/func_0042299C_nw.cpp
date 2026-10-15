// 0x42299C
extern "C" void func_00167E04(void*, void*, int) ;

struct Cls {
    char pad[0x1c];
    void* m1c;
    void f();
};
void Cls::f() {
    void* o = m1c;
    void* vt = *(void**)o;
    func_00167E04(o, *(void**)((char*)vt + 0x10), 0);
}
