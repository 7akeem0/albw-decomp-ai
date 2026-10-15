typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

struct Anim { u8 pad0[8]; f32 m8; u8 padc[4]; f32 m10; f32 m14; u8 pad18[4]; u8 m1C; };
struct AnimHolder { u8 pad0[0xc]; void* volatile mC; u8 pad10[4]; Anim* volatile m14; };
struct Ctl48C { u8 pad[4]; };
void func_0036C09C(Ctl48C* c, s32 v);
void func_0036B758(Ctl48C* c);
void func_0036BE78(Ctl48C* c);
struct StateMgr { s32 mCur; void changeState(s32 s); };
struct Obj598 { u8 pad[0x58]; f32 m58; u8 pad5c[4]; f32 m60; };

struct Self {
    u8 pad0[0x468];
    StateMgr m468;
    u8 pad46c[0x48c - 0x46c];
    Ctl48C m48C;
    u8 pad490[0x598 - 0x490];
    Obj598* m598;
    u8 pad59c[0x5fd - 0x59c];
    u8 m5FD;
    u8 pad5fe[0x68c - 0x5fe];
    AnimHolder* m68C;
    u8 pad690[0x73d - 0x690];
    u8 m73D;
    void update();
};

void Self::update()
{
    s32 st = m468.mCur;
    if (m73D == 1) {
        if (st == 0x67 || st == 0x6b || st == 0x96) goto hit;
    } else if (st == 0x5c || st == 0x61 || st == 0x67 || st == 0x6b || st == 0x84 || st == 0x96) {
hit:
        func_0036C09C(&m48C, 2);
    }
    {
        AnimHolder* h = m68C;
        void* x = h->mC; (void)x;
        Anim* a = h->m14;
        if (a->m1C == 0) {
            if (a->m10 >= 0.0f) {
                if (a->m8 != a->m14) goto end;
            } else { if (a->m8 <= 0.0f) goto doit; goto end; }
        doit:
            m468.changeState(4);
            { Obj598* o = m598; o->m60 = 5.0f; }
            { Obj598* o = m598; o->m58 = 5.0f; }
            func_0036B758(&m48C);
            m5FD = 1;
        }
    }
end:
    func_0036BE78(&m48C);
}






