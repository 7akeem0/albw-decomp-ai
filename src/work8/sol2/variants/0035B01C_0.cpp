typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef float f32;

struct Req5C_35B01C {
    Req5C_35B01C(u16 id, u32 arg, bool flag);
    u32 m[0x5C / 4];
};
struct Inner35B01C {
    u8 p0[0x10];
    f32 m10;
};
struct Obj35B01C {
    u8 p0[0xc];
    volatile u32 m0c;
    u8 p1[0x14 - 0x10];
    Inner35B01C* volatile m14;
};
struct Self35B01C {
    u8 p0[0x430];
    void* m430;
    Obj35B01C* m434;
};
void func_004CF478(void* o, bool v, u32 w);
void func_0016898C(Obj35B01C* t, const Req5C_35B01C& r);

extern "C" void func_0035B01C(Self35B01C* self) {
    func_004CF478(self->m430, false, 0);
    func_0016898C(self->m434, Req5C_35B01C(0, 0xa, false));
    Obj35B01C*& r = self->m434;
    u32 count=r->m0c;
    r->m14->m10 = 0.0f;
}
