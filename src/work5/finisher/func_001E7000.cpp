typedef short s16;
typedef int s32;
struct Mgr70FB60;
extern Mgr70FB60* data_0070FB60;
bool func_00556E64(Mgr70FB60* m);
struct SoundMgr;
extern SoundMgr* data_00711F50;
void func_004EB514(SoundMgr* s, int id);
struct Sub2C {
    char pad[6];
    s16 m6;
};
struct Cls7000 {
    virtual void vf0();
    char pad4[0x2c - 4];
    Sub2C m2c;
    bool func_001E7000();
};
bool Cls7000::func_001E7000() {
    Sub2C* s = &m2c;
    int i = 0;
    s16* id = &s[i].m6;
    if (*id > 0 && func_00556E64(data_0070FB60))
        func_004EB514(data_00711F50, *id);
    return false;
}
