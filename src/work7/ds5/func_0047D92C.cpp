// 0x47D92C
void func_0012C718(void*);
void func_00166620(void*, void*);
extern void* data_0070B850;

struct Q {
    char p0[0xd];
    unsigned char m0d;
    unsigned char m0e;
};

struct P {
    char p0[0x88];
    Q* m88;
};

void func_0047D92C(P* self) {
    Q* p = self->m88;
    if (p->m0d != 0 || p->m0e != 0) return;
    func_0012C718(self);
    func_00166620(data_0070B850, self);
}
