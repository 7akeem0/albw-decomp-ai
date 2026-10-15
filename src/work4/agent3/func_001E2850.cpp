typedef unsigned char u8;
typedef unsigned int u32;
struct Opt {
    Opt();          // 0x323994: m0 = 0
    u8 m0;
};
struct Obj7AC {
    bool func_00503180(int a, const Opt* opt, u32 b);
};
struct Obj788 {
    void func_0065CC10(bool b);
};
struct Cls2850 {
    char pad0[0x2c0];
    u32 m2c0;
    char pad2c4[0x788 - 0x2c4];
    Obj788 m788;
    char pad789[0x7ac - 0x789];
    Obj7AC m7ac;
    char pad7ad[0xa8c - 0x7ad];
    void* ma8c;
    char ma90[0xab8 - 0xa90];
    u8 mab8;
    void func_001E2850();
    void setCur(void* p) { ma8c = p; }
    void setFlag(bool b) { mab8 = b; }
    void reset() { mab8 = 0; ma8c = ma90; }
};
void Cls2850::func_001E2850() {
    if (mab8) {
        Opt opt;
        opt.m0 = 1;
        if (m7ac.func_00503180(0, &opt, m2c0)) {
            mab8 = 0;
            void* p = ma90;
            ma8c = p;
            m788.func_0065CC10(true);
        }
    }
}
