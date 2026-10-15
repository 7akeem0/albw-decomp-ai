// 0x4236AC
extern "C" void func_0066BFFC(void*, int) ;
struct Inner { char pad[8]; void* m8; char pad2[0x16 - 0xc]; unsigned short m16; };
struct Cls {
    char pad[0x14];
    Inner* m14;
    char pad2[0xe4 - 0x18];
    signed char mE4;
    void f();
};
void Cls::f() {
    if (mE4 == -1) return;
    Inner* p = m14;
    if (!(p->m16 & 8)) return;
    if (p->m8 != 0) return;
    func_0066BFFC((char*)this + 0x38, 9);
}
