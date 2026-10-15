typedef unsigned char u8;
typedef unsigned int u32;
struct Opt {
    Opt();          // 0x323994
    u8 m0;
};
struct Obj7B0 {
    bool func_00503180(int a, const Opt* opt, u32 b);
};
struct StateMgr788 {
     void changeState(int s);   // 0x65CFDC
};
struct Cls7A2C {
    virtual void vf0();
    char pad4[0x2c0 - 4];
    u32 m2c0;
    char pad2c4[0x788 - 0x2c4];
    StateMgr788 m788;
    char pad789[0x7b0 - 0x789];
    Obj7B0 m7b0;
    char pad7b1[0xa90 - 0x7b1];
    void* ma90;
    char ma94[0xadc - 0xa94];
    u8 madc;
    u8 madd;
    void func_001E78AC();
    void setMode(u8 m) { madd = m; }
    void changeMode(int s) { madd = 0; m788.changeState(s); }
    void func_001E7A2C();
};
void Cls7A2C::func_001E7A2C() {
    if (madd == 1) {
        Opt opt;
        opt.m0 = 1;
        if (m7b0.func_00503180(0, &opt, m2c0)) {
            ma90 = ma94;
            madd = 0;
            m788.changeState(2);
            func_001E78AC();
            madc = 0;
        }
    }
}
