
extern "C" void func_006003D8(unsigned int, void*);
extern "C" unsigned int func_00561E28(void*, unsigned int, unsigned int);
extern "C" void func_00601378(unsigned int);
struct Cls {
    char pad[0x8c];
    unsigned char m8c;
    unsigned char m8d;
    void f(unsigned int a);
};
void Cls::f(unsigned int a) {
    unsigned int marker;
    func_006003D8(0x208, &marker);
    unsigned int mk = marker;
    m8c = a;
    m8d = a ? 0xff : 0;
    marker = func_00561E28((char*)this + 0x8c, marker, 1);
    func_00601378((marker - mk) & ~3u);
}
