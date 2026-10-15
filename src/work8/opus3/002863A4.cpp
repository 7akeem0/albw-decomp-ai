typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct Thing { virtual void vf0(); };
typedef void (Thing::*PMF)();

struct Vec3 { f32 x, y, z; };
struct Obj430 { char pad0[0x61]; u8 m61; };
struct Obj434 { char pad0[4]; Vec3 m4; char pad1[0x5c - 0x10]; f32 m5c; };
struct Obj458 { char pad0[0x164]; u32 m164; };

struct Timeline { void func_00352210(bool b, f32 frame); };
template <typename T>
struct StateMgr {
    typedef void (T::*Func)();
    u32 mCounter;
    s8 mCur;
    s8 mNext;
    u8 mNum;
    char pad7[0x10 - 7];
    Timeline* mTimeline;
    T* mOwner;
    Func* mEnter;
    Func* mExec;
    Func* mExit;
    void execute() {
        (mOwner->*mExec[mCur])();
        ++mCounter;
        if (mTimeline)
            mTimeline->func_00352210(true, (f32)mCounter);
    }
};
struct Self {
    char pad0[0x3d0];
    Vec3 m3d0;
    char pad1[0x3e8 - 0x3dc];
    u32 m3e8;
    char pad2[0x40c - 0x3ec];
    StateMgr<Thing> mState;
    Obj430* m430;
    Obj434* m434;
    char pad4[0x458 - 0x438];
    Obj458* m458;
    void* m45c;
    u8 m460;
};

void func_004356B4(void* p);
void func_00352210(void* p, u32 n, f32 f);
void func_004D8AEC(void* p, u32 a, Vec3* v);
void func_004CEAF0(void* p);
void func_001512E8(void* p);

struct Sub40c { u32 n; s8 idx; char pad[0xb]; void* p; };

void func_002863A4(Self* s) {
    Obj434** pm = &s->m434;
    Obj434* o = *pm;
    s->m460 = 0;
    if (o != 0 && s->m430->m61 != 0) {
        f32 x = s->m3d0.x;
        f32 y = s->m3d0.y;
        f32 z = s->m3d0.z;
        u8 flag = s->mState.mCur;
        if (flag == 0) y -= o->m5c * 0.5f;
        Vec3* d = &o->m4;
        d->x = x;
        d->y = y;
        d->z = z;
        func_004356B4(*pm);
    }
    s->mState.execute();
    Obj458* p = s->m458;
    p->m164 |= 0x40000000;
    func_004D8AEC((char*)p + 0x80, s->m3e8, &s->m3d0);
    func_004CEAF0(s->m458);
    if (s->m45c != 0) func_001512E8(s->m45c);
}
