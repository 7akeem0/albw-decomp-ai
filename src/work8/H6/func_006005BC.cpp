// 0x6005BC: e = gMgr.ents[gMgr.idx]; if (!e) return; key 0x600->m04, 0x601->m08, 0x602->m0c, 0x603->m10; *out = value; other keys: return
typedef unsigned int u32;
typedef unsigned char u8;

struct Ent88 {
    u32 m00;
    u32 m04;
    u32 m08;
    u32 m0c;
    u32 m10;
};

struct Mgr88 {
    u8 pad0[0x124];
    u32 idx;
    Ent88* ents[1];
};

extern Mgr88 gMgr88;   // bss_0079CAB8

void func_006005BC(u32 key, u32* out)
{
    Ent88* e = gMgr88.ents[gMgr88.idx];
    if (e == 0)
        return;
    u32 v;
    if (key == 0x600) {
        v = e->m04;
    } else {
        u32 k = key - 0x600;
        k = k - 1;
        if (k == 0)
            v = e->m08;
        else if (k == 1)
            v = e->m0c;
        else if (k == 2)
            v = e->m10;
        else
            return;
    }
    *out = v;
}
