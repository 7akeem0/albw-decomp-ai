// 0x484F7C
extern "C" int func_00522828(void*, int);
extern "C" void func_004B964C(void*);
extern "C" void func_0066F174(void*, int) __attribute__((weak));
extern void* data_0070B850;
struct Cls {
    char pad1[0x10];
    int m10;
    char* m14;
    void f();
};
void Cls::f() {
    if (func_00522828(data_0070B850, m10) != 0 ||
        (*(unsigned short*)(m14 + 0x16) & 4) != 0) {
        func_004B964C(this);
        func_0066F174((char*)this + 0x74, 2);
    }
}
