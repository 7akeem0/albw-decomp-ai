// 0x45B1DC
int func_00532C78(void*);
void func_0066D544(void*, int) ;

struct Q {
    char p0[0xcc];
    unsigned char mcc;
};

struct P {
    char p0[0x1e4];
    Q* m1e4[3];
    char p1[0x214 - 0x1f0];
    unsigned m214;
};

void func_0045B1DC(P* self) {
    unsigned i = self->m214;
    Q** arr = self->m1e4;
    if (i < 3) arr += i;
    Q* p = *arr;
    if (p->mcc != 1) return;
    if (func_00532C78((char*)p + 0xec) != 0) return;
    func_0066D544((char*)self + 0x17c, 2);
}
