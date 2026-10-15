// 0x41E61C
struct Base {
    virtual void a(); virtual void b(); virtual void c();
    virtual int d();
};
struct Sub {
    int a0;
    int a4;
    char pad0[0x20 - 8];
    short s20;
};
struct P {
    char pad[4];
    unsigned short m4;
    unsigned char m6;
    char pad2[0x1c - 7];
    Sub sub;
    unsigned char b24;
};
struct Cls {
    int m0;
    int m4;
    float m8;
    char pad1[0x20 - 0xc];
    float m20;
    Base* m24;
    P* m28;
    unsigned char m2C;
    void f();
};
void Cls::f() {
    m2C = 1;
    P* p = m28;
    p->m4 = 0;
    m28->m6 = 0;
    P* p2 = m28;
    Sub* q = &p2->sub;
    p2->b24 = 0;
    int v = m24->d();
    float scale = m20 * m8;
    q->s20 = (short)(int)((float)v * scale);
    q->a0 = m0;
    q->a4 = m4;
}
