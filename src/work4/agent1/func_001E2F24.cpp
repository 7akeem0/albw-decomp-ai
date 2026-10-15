typedef unsigned char u8; typedef signed char s8; typedef unsigned int u32; typedef signed int s32;
struct Tmp { u8 m0; u8 pad[3]; Tmp(); };   // 0x323994
struct Obj434;
bool func_00503180(Obj434* o, int a, Tmp* t, void* p);
struct X2F24 {
    virtual void vf();
    char pad004[0x2c0 - 4]; void* m2c0;
    char pad2c4[0x40c - 0x2c4]; char m40c[0x434 - 0x40c];
    char m434[0x714 - 0x434];
    void* m714;
    char pad718[0x71f - 0x718]; u8 m71f;
};
void X2F24::vf() {
    if (m71f == 2) {
        Tmp t;
        t.m0 = 1;
        if (func_00503180((Obj434*)m434, 0, &t, m2c0))
            m714 = m40c;
    }
}
