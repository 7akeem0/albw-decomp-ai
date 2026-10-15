// 0x480B74
extern "C" void func_0012C718(void*);
struct Inner { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls { char pad[0x110]; Inner* m110; void f(); };
void Cls::f() {
    Inner* p = m110;
    if (p->mD == 0 && p->mE == 0) func_0012C718(this);
}
