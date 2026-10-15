typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;

struct Mgr70B728 { char pad[0x44]; s32 m44; };
extern Mgr70B728* data_0070B728;
struct ActorMgr;
struct Game { char pad[0x3dbbc]; char mgr[4]; };
extern Game* data_00706E20;
struct Actor;
Actor* func_0052FBA0(void* mgr, u32 handle);
s32 func_00588BE4(Actor* a);
extern const s32 ro_00693940;
extern const s32 ro_006933D0;

struct Ctl;
struct List4 {
    Ctl* first;
    char pad[0xa4 - 4];
    char sentinel[4];
    bool isEmpty() { return (void*)first == (void*)sentinel; }
};
struct Obj93C {
    void* vt;
    List4 list;
};
struct Ctl {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual void a15(); virtual void a16(); virtual void a17(); virtual void a18(); virtual void a19(); virtual void a20(); virtual void a21(); virtual void a22(); virtual void a23(); virtual void a24(); virtual void a25(); virtual void a26(); virtual void a27(); virtual void a28(); virtual void a29(); virtual void a30(); virtual void a31(); virtual void a32(); virtual void a33(); virtual void a34(); virtual void a35(); virtual void a36(); virtual void a37(); virtual void a38(); virtual void a39(); virtual void a40(); virtual void a41(); virtual void a42(); virtual void a43(); virtual void a44(); virtual void a45(); virtual void a46(); virtual void a47(); virtual void a48(); virtual void a49(); virtual void a50(); virtual void a51(); virtual void a52(); virtual void a53(); virtual void a54(); virtual void a55(); virtual void a56(); virtual void a57(); virtual void a58(); virtual void a59(); virtual void a60(); virtual void a61(); virtual void a62(); virtual void a63(); virtual void a64(); 
    virtual bool v104(int n);
};
struct Sub510 { char pad[5]; u8 m5; };
struct SubDB8 {
    char pad[0x49];
    u8 m49;
    char pad4a[2];
    s32 m4c;
};
struct Info { u8 m0; u8 m1; u8 m2; u8 m3; };
struct Arg {
    char pad[0x28];
    u32 m28;
    Info* m2c;
};

static inline bool inRange(u8 v, u8 lo, u8 hi) { return v >= lo && v <= hi; }
struct Obj {
    char pad0[0x2cc];
    u32 m2cc;
    char pad2d0[0x510 - 0x2d0];
    Sub510* m510;
    char pad514[0x90c - 0x514];
    u16 m90c;
    char pad90e[0x93c - 0x90e];
    Obj93C* m93c;
    char pad940[0xaf0 - 0x940];
    u16 maf0;
    u16 paf2;
    u16 maf4;
    char padaf6[0xb42 - 0xaf6];
    s8 mb42;
    char padb43[0xdb8 - 0xb43];
    SubDB8 mdb8;
    s32 func(Arg* a);
    s32 f(Arg* a);
};

s32 Obj::f(Arg* a) {
    if (data_0070B728->m44 != 0) return 0;
    if (m93c->list.isEmpty()) {
        SubDB8* s = &mdb8;
        if (s->m49 != 0 || s->m4c != 0) return 0;
    }
    Actor* act = func_0052FBA0(data_00706E20->mgr, a->m28);
    if (maf0 != 0 && a->m2c != 0 && a->m2c->m1 == 5) return 0;
    if (m93c->list.first->v104(3)) {
        u8 v = m510->m5;
        if (v >= 0xb) { if (v <= 0x11) return 0; }
    } else {
        if (m93c->list.first->v104(4)) return 0;
    }
    if (maf4 != 0) return 0;
    if (m90c != 0) return 0;
    if (mb42 != 0) return 0;
    Info* inf = a->m2c;
    if (inf != 0) {
        if (inf->m0 == 3 && inf->m3 != 1) return 0;
        u32 h = m2cc; if (a->m28 == h) return 0;
    }
    if (act != 0 && inf != 0 && inf->m0 == 2 && func_00588BE4(act) != ro_00693940 && func_00588BE4(act) != ro_006933D0)
        return 0;
    return func(a);
}
