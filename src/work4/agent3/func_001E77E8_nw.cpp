typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
struct Obj711DE8 { char pad[0x9c8]; void* m9c8; };
extern Obj711DE8* data_00711DE8;
struct FlagMgr;
extern FlagMgr* data_0070C8E0;
void func_004AD9E8(FlagMgr* m, u16 id, u8 kind, int v);
struct Mgr70FB60;
extern Mgr70FB60* data_0070FB60;
bool func_00556EA0(Mgr70FB60* m);
struct StateMgr788 {
     void changeState(int s);   // 0x65CFDC
};
struct Cls77E8;
bool func_0014E2A0(Cls77E8* c, u32 a, int b, int c2, int d, int e);
struct Cls77E8 {
    virtual void vf0();
    char pad4[0x34 - 4];
    u8 m34;
    u8 m35;
    u16 m36;
    char pad38[0x788 - 0x38];
    StateMgr788 m788;
    char pad789[0x7ac - 0x789];
    u32 m7ac;
    char pad7b0[0xadd - 0x7b0];
    u8 madd;
    void func_001E77E8();
};
void Cls77E8::func_001E77E8() {
    if (data_00711DE8->m9c8) {
        func_004AD9E8(data_0070C8E0, m36, m34, 0);
        m788.changeState(0);
    }
    if (madd)
        return;
    if (func_00556EA0(data_0070FB60)) {
        madd = 1;
    } else if (!func_0014E2A0(this, m7ac, 0, 0x100, 0, 0)) {
        madd = 1;
    }
}
