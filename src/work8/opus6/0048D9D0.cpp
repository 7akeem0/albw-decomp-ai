typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
typedef float f32;

struct CriticalSection { void lock(); void unlock(); };   // 0x10C0B8 / 0x10EEE0
template <class T> struct ScopedLock {
    T* mLocked;
    explicit ScopedLock(T* t) : mLocked(t) { t->lock(); }
    ~ScopedLock() { mLocked->unlock(); }
};
struct Res {
    u32 m0;
    CriticalSection mCS;
};
void func_00110D44(char* dst, const char* src, s32 n);
void func_0049D774(Res* r, u32 h);
bool func_0049DC40(Res* r, char* name, void* out);

struct Obj {
    char pad[0x5c];
    Res* m5c;
    char pad60[0x6c - 0x60];
    u8 m6c;
    u8 p6d[3];
    u32 m70;
    char m74[0x80];
    char mf4[4];
    char mf8[0x1d4 - 0xf8];
    u32 m1d4;
    u32 m1d8;
    char p1dc[0x1e4 - 0x1dc];
    f32 m1e4;
    u8 m1e8;
    u8 m1e9;
    void func_0049F8C4();
    void start(u8 s) { m1d4 = m1d8; m1e9 = s; m1e8 = 0; m1e4 = 1.0f; }
    void start2() { m1e9 = 2; m1e8 = 0; m1e4 = 1.0f; }
    bool f(const char* name);
};

bool Obj::f(const char* name) {
    ScopedLock<CriticalSection> lock(&m5c->mCS);
    if (m1e9 != 0) return false;
    m6c = 0;
    func_00110D44(m74, name, 0x80);
    bool ok;
    {
        ScopedLock<CriticalSection> lock2(&m5c->mCS);
        if (m6c == 1) {
            func_0049D774(m5c, m70);
            m70 = 0;
        }
        ok = func_0049DC40(m5c, m74, mf8);
    }
    if (!ok) return false;
    m70 = 0;
    __schedule_barrier();
    m1d4 = m1d8;
    start2();
    func_0049F8C4();
    return true;
}
