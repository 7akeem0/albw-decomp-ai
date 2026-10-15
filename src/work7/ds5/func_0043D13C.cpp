// 0x43D13C
extern "C" int func_0058D888(void*);
extern "C" int func_00477024(void*);
extern "C" void func_0066C424(void*, int) __attribute__((weak));
extern void* data_007142C8;
struct Sub { char pad[0x5f]; unsigned char m5F; };
struct Cls {
    char pad1[0x74];
    char pad2[0x140 - 0x74];
    Sub* m140;
    char pad3[0x158 - 0x144];
    void* m158;
    void f();
};
void Cls::f() {
    if (m140->m5F != 0 && func_0058D888(data_007142C8) != 0 && func_00477024(m158) != 0) {
        func_0066C424((char*)this + 0x74, 4);
    }
}
