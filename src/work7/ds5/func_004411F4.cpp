// 0x4411F4
struct Inner { char pad[0x2f]; unsigned char m2f; };
struct Cls {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
    virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
    virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15();
    virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
    virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
    virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27();
    virtual void s28(); virtual void s29();
    virtual void slot30();
    char pad[0x74 - 4];
    Inner* m74;
    char pad2[0x89 - 0x78];
    unsigned char m89;
    unsigned char m8a;
    void f();
};
void Cls::f() {
    unsigned char c = m74->m2f;
    m89 = c;
    m8a = 0xff;
    slot30();
}
