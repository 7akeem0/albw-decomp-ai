
struct Src {
    unsigned short m0;
    char pad0[4];
    unsigned short m6;
    unsigned short m8;
    unsigned short ma;
};

struct Dst {
    char c0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    float m4;
    float m8;
    float mc;
    unsigned short m10;
    float m14;
};

template<class T0> inline void hlp0(T0 d) { d->m8 = 0.0f;
    d->mc = 0.0f; }
void func_00435BE8(Dst* d, Src* s) {
    d->m10 = s->m0;
    d->m4 = 0.0f;
    hlp0(d);
     d->b1 = (unsigned char)s->ma;
    d->b3 = (unsigned char)s->m8;
    d->b2 = (unsigned char)s->m6;
    d->m14 = 1.0f;
}
