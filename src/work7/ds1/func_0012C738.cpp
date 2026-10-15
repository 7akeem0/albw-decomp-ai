typedef unsigned char u8;

struct Sub {
    u8 pad[0xd];
    u8 m0d;
    u8 m0e;
};

extern "C" void func_0012C790(Sub*);

struct S {
    u8 pad0[0x14];
    Sub* m14;
    Sub* m18;
    Sub* m1c;
    u8 pad1[0x24 - 0x20];
    Sub* m24;
    u8 pad2[0x2c - 0x28];
    Sub* m2c;
};

void func_0012C738(S* s) {
    Sub* p1 = s->m24;
    if (p1->m0d == 0 && p1->m0e == 0) p1->m0e = 1;
    Sub* p2 = s->m1c;
    if (p2->m0d == 0 && p2->m0e == 0) p2->m0e = 1;
    func_0012C790(s->m14);
    func_0012C790(s->m2c);
    func_0012C790(s->m18);
}
