typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef signed char s8;
typedef unsigned short u16; typedef short s16; typedef float f32;
struct Actor { char pad[0x36]; u16 m36; };
struct ActorMgr;
Actor* func_0052FBDC(ActorMgr* m, s32 id, s32 z);
s32 func_00588BF0(Actor* a, s32 z);
extern "C" char* data_00706E20;
struct Link { s16 id; u8 pad[4]; };
struct Obj {
    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c(); virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c(); virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c(); virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c(); virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c(); virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
    virtual void va0(); virtual void va4(); virtual void va8(); virtual void request(s32 s, s32 t);
    char pad4[0x5c - 4];
    u8 m5c; u8 pad5d; Link m5e[8];
    char pad[0x853 - 0x5e - 8 * 6];
    u8 m853, m854, m855;
    char pad856[0x990 - 0x856];
    u16 m990;
    void f();
    Link* getLink(s32 i) { return &m5e[i]; }
    Link& getLinkR(s32 i) { return m5e[i]; }
};
static inline ActorMgr* mgr() { return (ActorMgr*)(data_00706E20 + 0x3DBBC); }
void Obj::f() {
    if (m990 != 0) { m990--; return; }
    m990 = 100;
    u32 ok = 0;
    for (s32 i = 0; i < m5c; i++) {
        Link* l = m5e; s32 id = l[i].id;
        if (id > 0) {
            Actor* a = func_0052FBDC(mgr(), id, 0);
            if (i & 1) {
                if (ok) {
                    if (!a || (a->m36 != 0 && func_00588BF0(a, 0))) ok = 0;
                }
            } else {
                ok = 0;
                if (a && a->m36 != 0 && func_00588BF0(a, 0)) ok = 1;
            }
        }
        if (ok & i) break;
    }
    if (ok) { m853 = 6; m855 = 7; request(6, -1); return; }
    m853 = 0; m855 = 1; request(0, -1);
}
