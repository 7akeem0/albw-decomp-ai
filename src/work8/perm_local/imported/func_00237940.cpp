typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00726900;
extern "C" TypeInfo data_00726904;
extern "C" const char ro_006F650C[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_00726900 & 1) && __cxa_guard_acquire(&data_00726900)) {
        { TypeInfo* t = &data_00726904; t->vt = ro_006F650C; }
        __cxa_guard_release(&data_00726900);
    }
    return &data_00726904;
}
struct Obj {
    virtual void vf0();
    virtual void vf1();
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct X : Obj {};
struct G { u8 pad[0x44]; Obj* m44; };
template <class T> struct PtrArray {
    s32 mNum; s32 mMax; T** mPtrs;
    T* at(s32 i) const { if ((u32)i < (u32)mNum) return mPtrs[i]; return 0; }
};
template <class T, s32 N> struct SafeArray {
    T mBuf[N];
    T& operator[](s32 i) { if ((u32)i < N) return mBuf[i]; return mBuf[0]; }
    T& get(s32 i) { T* p = mBuf; if ((u32)i < N) p += i; return *p; }
};
struct Anim;
extern "C" G* data_0070B728;
struct Self;
extern "C" void func_0014E138(Self* s);
extern "C" bool func_00588C3C(Self* s);
extern "C" void func_00168E9C(void* p, Anim* a, s32 v);
struct Self {
    u8 pad[0x478]; s32 m478; s32 m47C; void** m480; u8 pad1[0x64c - 0x484]; s32 m64C; s32 m650; Anim** m654; SafeArray<void*, 10> m658;
    void func_00237940(bool b);
};
static inline X* dc(Obj* o) { if (isDerived(o)) return static_cast<X*>(o); return 0; }
void Self::func_00237940(bool b)
{
    Self* s = this;
    func_0014E138(s);
    if (b && !func_00588C3C(s)) return;
    X* x = dc(data_0070B728->m44);
    if (!x && !func_00588C3C(s)) return;
    s32 i = -1;
    for (void** it = s->m480, **end = s->m480 + s->m478; it != end; ++it) {
        ++i;
        if (s->m658[i] != 0) {
            s32 i_c49 = i;
            Anim* a = (u32)i < (u32)s->m64C ? s->m654[i] : 0;
            if (a) func_00168E9C(s->m658.get(i_c49), a, 1);
        }
    }
}
