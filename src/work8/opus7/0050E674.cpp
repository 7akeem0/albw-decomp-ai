typedef unsigned int u32; typedef int s32; typedef unsigned char u8; typedef float f32;
struct Actor { u8 pad[0x4a0]; u8 m4a0; u8 get4a0(); };
struct ActorMgr;
extern "C" {
extern u8* data_00706E20;
extern void* data_0070FB60;
Actor* func_0052FBA0(ActorMgr*, u32);
Actor* func_00687E28(Actor*);
void func_0050F444(void*);
void func_002CF064(Actor*, u32*);
void func_002CF084(Actor*);
void func_00291CC4(void*);
int func_0051D27C(void*, int, u32);
void func_002CDFC4(Actor*, int);
}
static inline ActorMgr* mgr() { return (ActorMgr*)(data_00706E20 + 0x3DBBC); }
struct Obj {
    u8 pad0[0x2cc]; u32 m2cc;
    u8 pad2d0[1000 - 0x2d0]; u8 m3e8[0x853 - 1000];
    u8 m853, m854, m855, m856;
    u8 pad857[0x8b4 - 0x857]; f32 m8b4;
    u8 pad8b8[0xa08 - 0x8b8]; u32 ma08; u32 ma0c; s32 ma10;
    int f(int st);
    void set854(u8 v);
    void set856(u8 v);
};
int Obj::f(int st) {
    switch (st) {
    case 0:
        if (ma10 != 1) {
            if (ma08 == 0) func_0050F444(this);
            ActorMgr* m = mgr(); u32 h = ma08;
            Actor* a = func_00687E28(func_0052FBA0(m, h));
            if (!a) return 0; {
            h = m2cc;
            func_002CF064(a, &h);
            m853 = 8;
            m855 = 8;
            set854(7);
            func_00291CC4(data_0070FB60);
            ma10 = 1;
            m8b4 = 0.15f;
            }
        } else {
            Actor* a = func_00687E28(func_0052FBA0(mgr(), ma08));
            if (a && a->m4a0) return 1;
        }
        return 0;
    case 1: {
        Actor* a = func_00687E28(func_0052FBA0(mgr(), ma08));
        if (a) {
        func_002CF084(a);
        ma10 = 2;
        set856(7);
        return 1;
        }
        break;
    }
    case 2:
        if (!func_0051D27C(m3e8, -1, 0x2222220)) return 0;
        return 1;
    case 10: case 11: case 12: case 13: case 14: case 15: case 16: {
        Actor* a = func_00687E28(func_0052FBA0(mgr(), ma08));
        if (a) func_002CDFC4(a, st);
        return 1;
    }
    default:
        return 1;
    }
    return 0;
}
