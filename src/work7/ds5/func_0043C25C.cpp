// 0x43C25C
bool func_001B6AFC(void*);

struct Q {
    char p0[0xd];
    unsigned char m0d;
    unsigned char m0e;
};

struct P {
    char p0[0x148];
    Q* m148;
    char p1[0x158 - 0x14c];
    Q* m158;
};

bool func_0043C25C(P* self) {
    bool r = func_001B6AFC(self);
    Q* a = self->m148;
    if (a) {
        if (a->m0d != 3 || a->m0e != 3) r = false;
    }
    Q* b = self->m158;
    if (b->m0d != 3 || b->m0e != 3) r = false;
    return r;
}
