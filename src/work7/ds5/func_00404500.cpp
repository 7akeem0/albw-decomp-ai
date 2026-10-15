// 0x404500
extern "C" void func_003E6AA8(void*, int, int, const char*, const char*);
extern const char ro_006A8844[];
struct Obj { void* vt; };
struct Cls {
    char pad[0x24];
    Obj* m24;
    void f(const char* name);
};
void Cls::f(const char* name) {
    char buf[0x48];
    func_003E6AA8(buf, 0x48, 0x47, ro_006A8844, name);
    Obj* o = m24;
    void** vt = *(void***)o;
    ((void(*)(void*, int, void*, int))vt[3])(o, 0x626c7974, buf, 0);
}
