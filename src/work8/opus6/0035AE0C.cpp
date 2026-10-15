typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct FrameCtrl {
    char pad[8];
    f32 mFrame;
    f32 mC;
    f32 mRate;
    f32 mEnd;
    char pad18[4];
    u8 mLoop;
    bool isEnd() const {
        if (mLoop) return false;
        if (mRate >= 0.0f) return mFrame == mEnd;
        return mFrame <= 0.0f;
    }
};
struct Anim {
    char pad[0xc];
    s32 mNum;
    s32 mMax;
    FrameCtrl* m14;
    FrameCtrl& operator[](s32 i) { if ((u32)i < (u32)mNum) return m14[i]; return m14[0]; }
};
void func_00169A80(Anim* a);
void func_00168E9C(Anim* a, void* b, s32 c);
struct StateMgr { void changeState(s32 s); };   // 0x6665A0

struct Obj {
    char pad[0x40c];
    StateMgr m40c;
    char pad40d[0x430 - 0x40d];
    void* m430;
    Anim* m434;
    Anim* m438;
    Anim* m43c;
    u8 m440;
    void restart(Anim*& a) {
        func_00169A80(a);
        func_00168E9C(a, m430, 0);
    }
    void f();
};

void Obj::f() {
    if (m434->m14->isEnd()) {
        if ((*m43c)[0].isEnd() && m440 != 2) m40c.changeState(0);
        restart(m43c);
    } else {
        restart(m434);
    }
    restart(m438);
}
