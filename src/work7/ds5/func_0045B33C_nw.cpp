// 0x45B33C
int func_00532C78(void*);
void func_0066D544(void*, int) ;

struct Q {
    char p0[0xcc];
    unsigned char mcc;
};

struct P {
    char p0[0x1e4];
    Q* m1e4[3];
    char p1[0x230 - 0x1f0];
    unsigned m230;
};

void func_0045B33C(P* self) {
    unsigned i = self->m230;
    Q** arr = self->m1e4;
    if (i < 3) arr += i;
    Q* p = *arr;
    if (p->mcc != 0xb) return;
    if (func_00532C78((char*)p + 0xec) != 0) return;
    func_0066D544((char*)self + 0x17c, 0x17);
}
