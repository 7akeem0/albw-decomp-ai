// 0x48AB78
extern "C" void func_0048AB2C(void*);
extern "C" void func_0048AB94(void*);

struct Cls {
    char pad[0x10c];
    void* m10c;
    void f(void* v);
};
void Cls::f(void* v) {
    m10c = v;
    func_0048AB2C(this);
    func_0048AB94((char*)this + 0x108);
}
