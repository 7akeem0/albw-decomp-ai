// 0x43DF04
extern "C" void func_0051BC50(void*);
extern "C" void func_002BEE00(void*);
extern void* data_007142C8;
struct Cls {
    char pad[0x70];
    unsigned char m70;
    char pad2[0x120 - 0x71];
    void* m120;
    char pad3[0x130 - 0x124];
    void* m130;
    char pad4[0x140 - 0x134];
    void* m140;
    void f();
};
void Cls::f() {
    func_0051BC50(data_007142C8);
    func_002BEE00(m130);
    func_002BEE00(m120);
    func_002BEE00(m140);
    m70 = 1;
}
