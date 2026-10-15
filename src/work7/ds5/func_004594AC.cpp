// 0x4594AC
extern "C" int func_00532C78(void*);
extern "C" int func_004C3824(void*, int);
extern "C" void func_0066D544(void*, int) __attribute__((weak));
extern void* data_00711DE8;
struct Cls {
    char pad1[0x17c];
    char m17C;
    char pad2[0x1e4 - 0x17d];
    void* m1E4[3];
    char pad3[0x214 - 0x1f0];
    int m214;
    void f();
};
void Cls::f() {
    int idx = m214;
    void** arr = m1E4;
    if ((unsigned)idx < 3) arr += idx;
    void* e = *arr;
    if (func_00532C78((char*)e + 0xec) != 0) return;
    if (func_004C3824(data_00711DE8, m214) == 0) return;
    func_0066D544((char*)this + 0x17c, 0xd);
}
