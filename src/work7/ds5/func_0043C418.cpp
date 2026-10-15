// 0x43C418
bool func_001B6CE4(void*);

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

bool func_0043C418(P* self) {
    bool r = func_001B6CE4(self);
    Q* a = self->m148;
    if (a) {
        if (a->m0d != 0 || a->m0e != 0) r = false;
    }
    Q* b = self->m158;
    if (b->m0d != 0 || b->m0e != 0) r = false;
    return r;
}
