// 0x448880
extern "C" void func_0047E8C4(void*, int, int);
extern "C" void func_002BF8D4(void*, int);
extern "C" void func_002317C0(void*, float);
struct Sub { char pad[0x5d]; unsigned char m5d; };
struct Cls {
    char pad[0x210];
    Sub* m210;
    void f();
};
void Cls::f() {
    func_0047E8C4(m210, 1, 0);
    Sub* p = m210;
    if (p->m5d != 0) return;
    func_002BF8D4(p, 1);
    func_002317C0((char*)p + 0x6c, 1.0f);
}
