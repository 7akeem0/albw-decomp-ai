// 0x452124
void func_001B6D40(void*);
void func_0012C718(void*);

struct Q {
    char p0[0xd];
    unsigned char m0d;
    unsigned char m0e;
};

struct P {
    char p0[0x260];
    Q* m260;
    Q* m264;
};

void func_00452124(P* self) {
    func_001B6D40(self);
    Q* a = self->m260;
    if (a->m0d == 3 && a->m0e == 3) func_0012C718(a);
    Q* b = self->m264;
    if (b->m0d == 3 && b->m0e == 3) {
        func_0012C718(b);
        return;
    }
}
