typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;
extern void* data_00706E20;                          // ActorMgr singleton pointer
struct Actor;
Actor* func_0052FBDC(void* mgr, s32 id, s32 z);       // 0x52FBDC, ActorMgr::find(id,0)
struct Entry { s16 id; char pad[4]; };               // 6 bytes
struct C {
    char pad0[0x5c];
    u8 m5c;                                          // entry count
    char pad5d[1];
    Entry m5e[1];                                    // +0x5e
    bool f(Actor* p);
};
bool C::f(Actor* p) {
    s32 n = m5c;
    for (s32 i = 0; i < n; i++) {
        s16 id = m5e[i].id;
        if (id > 0) {
            Actor* a = func_0052FBDC((char*)data_00706E20 + 0x3dbbc, id, 0);
            if (a && a == p)
                return true;
        }
    }
    return false;
}
