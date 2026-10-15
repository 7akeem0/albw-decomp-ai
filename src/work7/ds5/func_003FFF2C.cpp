// 0x3FFF2C
struct Cls {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
    virtual void slot8(unsigned, unsigned char);
    char pad[0x41];
    unsigned char m45;
    void f(unsigned idx, unsigned char v);
};

void Cls::f(unsigned idx, unsigned char v) {
    if (idx == 0x10) {
        m45 = v;
        return;
    }
    slot8(idx, v);
}
