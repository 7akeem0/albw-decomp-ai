// 0x43DD2C  (near-miss: orig if-converts the second test to ldrbeq/cmpeq)
extern "C" void func_0012C790(void*);
extern "C" void func_001B6B38(void*);
struct Sub { char pad[0xd]; unsigned char mD; unsigned char mE; };
struct Cls { char pad[0x148]; Sub* m148; void f(); };
void Cls::f() {
    Sub* p = m148;
    if (p) {
        if (p->mD != 0 || p->mE != 0) {
            func_0012C790(p);
            func_001B6B38(m148);
        }
    }
}
