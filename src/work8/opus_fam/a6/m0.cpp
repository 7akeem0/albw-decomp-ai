
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
struct Cnt { u32 v; Cnt(u32 x) : v(x) {} };
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
    void setState(s8 s);
    Elem* elemAt(s32 i) { if ((u32)i >= elemNum) return elems; return &elems[i]; }
};

void StateMgr::setState(s8 s) {
void* tl = timeline; s8 old = current; Cnt z(0); current = s; count = z; next = old;
    if (tl) {
        u32 buf[2];
        void* pt = buf;
        Elem* e = elemAt(current);
        e->e2();
        func_0010BEB4(timeline, *new (pt) SafeStr(e->m4));
    }
}
