// 0x453C78
void func_0012C718(void*);

struct Q {
    char p0[0xd];
    unsigned char m0d;
    unsigned char m0e;
};

struct P {
    char p0[0xd];
    unsigned char m0d;
    unsigned char m0e;
    char p1[0x9c - 0xf];
    Q* m9c;
};

void func_00453C78(P* self) {
    if (self->m0d == 3 && self->m0e == 3) {
        func_0012C718(self);
        Q* q = self->m9c;
        if (q->m0d == 3 && q->m0e == 3) {
            func_0012C718(q);
            return;
        }
    }
}
