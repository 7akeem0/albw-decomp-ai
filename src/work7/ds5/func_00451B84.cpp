// 0x451B84
extern "C" void func_002317C0(void*, float);
struct Inner { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls {
    char pad[0x44];
    Inner* m44;
    unsigned int m48;
    void f();
};
void Cls::f() {
    if (m44 && m48 > 0x3c) func_002317C0((char*)m44 + 0x44, 1.0f);
    m48++;
}
