typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
struct FlagMgr;
extern FlagMgr* data_0070C8E0;
bool func_005822A0(FlagMgr* m, u16 id, u8 kind);
struct StateMgr788 {
    __attribute__((weak)) void func_0065CE98(int s);
};
struct Cls704C;
bool func_0014E2A0(Cls704C* c, u32 a, int b, int c2, int d, int e);
struct Cls704C {
    virtual void vf0();
    char pad4[0x34 - 4];
    u8 m34;
    u8 m35;
    u16 m36;
    u16 m38;
    char pad3a[0x788 - 0x3a];
    StateMgr788 m788;
    char pad789[0x7ac - 0x789];
    u32 m7ac;
    char pad7b0[0xaec - 0x7b0];
    u8 maec;
    void func_001E704C();
};
void Cls704C::func_001E704C() {
    if (func_005822A0(data_0070C8E0, m38, m35)) {
        m788.func_0065CE98(3);
        return;
    }
    if (!func_005822A0(data_0070C8E0, m36, m34))
        return;
    if (maec)
        return;
    if (func_0014E2A0(this, m7ac, 0, 0x100, 0, 0))
        maec = 1;
}
