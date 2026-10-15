// 0x40EAA4
void func_0040EA34(void*);
void func_0010C180(void*);
__svc(0x23) int func_svc23(int);

struct P {
    void* m0;
    char pad0[0x15 - 4];
    unsigned char m15;
};

P* func_0040EAA4(P* self) {
    if (self->m15) func_0040EA34(self);
    func_0010C180(self);
    if (self->m0) {
        func_svc23((int)self->m0);
        self->m0 = 0;
    }
    return self;
}
