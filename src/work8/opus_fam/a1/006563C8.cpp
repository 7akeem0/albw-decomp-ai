// 0x006563C8 StateMgr::changeState (324 B, family of 303 byte-identical functions)
// Keys: (1) the frame counter at +0 is a small class with a user constructor, reset with
//       `count = Cnt(0);` (a plain u32 `count = 0;` swaps the r0/r1 of old state and zero);
//       (2) setState reads `timeline` into a local FIRST and tests the local;
//       (3) the exit PMF takes the new state: void (Owner::*)(s32), called with s.
typedef unsigned int u32;
typedef int s32;
typedef unsigned char u8;
typedef signed char s8;

inline void* operator new(unsigned int, void* p) { return p; }

struct SafeStr {
    virtual ~SafeStr() {}
    virtual void assure() const;
    const char* text;
    SafeStr(const char* v) : text(v) {}
};

struct Owner;
typedef void (Owner::*Func)();
typedef void (Owner::*ExitFunc)(s32);

struct Elem {
    virtual void e0();
    virtual void e1();
    virtual void e2();
    const char* m4;
    u8 pad[0x24 - 0x8];
};

extern "C" void func_0010BEB4(void*, const SafeStr&);

struct Cnt {
    u32 v;
    Cnt(u32 x) : v(x) {}
};

struct StateMgr {
    Cnt count;
    s8 current;
    s8 next;
    u8 stateCount;
    u8 pad7;
    u32 elemNum;
    Elem* elems;
    void* timeline;
    Owner* owner;
    Func* enter;
    Func* execute;
    ExitFunc* exit;

    void callExit(s8 s);
    void callEnter();
    void changeState(s8 s);
    void setState(s32 s) {
        void* tl = timeline;
        s8 old = current;
        current = s;
        count = Cnt(0);
        next = old;
        if (tl) {
            u32 buf[2];
            void* pt = buf;
            Elem* e = elemAt(current);
            e->e2();
            func_0010BEB4(timeline, *new (pt) SafeStr(e->m4));
        }
    }
    Elem* elemAt(s32 i) {
        if ((u32)i >= elemNum) return elems;
        return &elems[i];
    }
};

void StateMgr::callExit(s8 s) {
    if (current != -1) {
        if (exit[current] != 0) (owner->*exit[current])(s);
    }
}

void StateMgr::callEnter() {
    if (enter[current] != 0) (owner->*enter[current])();
}

void StateMgr::changeState(s8 s) {
    callExit(s);
    setState(s);
    callEnter();
}
