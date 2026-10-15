




typedef unsigned char u8;
typedef unsigned int u32;
typedef float f32;

struct Req5C {
    char p0[0x60];
};

struct Inner {
    char p0[0x10];
    f32 m10;
};

struct Obj {
    char p0[0xc];u32 num;u32 cap;
    Inner* m14;
    Inner&operator[](int i){if((u32)i<(u32)num)return m14[i];return *m14;}
};

struct Other {
    char p0[0x44];
    u8 m44;
};

struct Self {
    char p0[0x410];
    Obj* m410;
    char p414[0x448 - 0x414];
    u8 m448;
    char p449[0x44c - 0x449];
    Other* m44c;
};

Req5C* func_002C11E8(Req5C* self, u32 a, u32 id, bool flag);
void func_0016898C(Obj* o, Req5C* r);

void func_0035BC48(Self* self) {
    self->m448 = 1;
    if (self->m410 != 0) {
        Req5C r;
        Req5C* p = func_002C11E8(&r, 0, 10, false);
        func_0016898C(self->m410, p);
        (*self->m410)[0].m10 = 1.0f;
    }
    if (self->m44c != 0) {
        self->m44c->m44 = 1;
    }

return;
}
