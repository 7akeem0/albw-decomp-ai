typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007279A8;
extern "C" TypeInfo data_007279AC;
extern "C" const char ro_006F6008[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007279A8 & 1) && __cxa_guard_acquire(&data_007279A8)) {
        { TypeInfo* t = &data_007279AC; t->vt = ro_006F6008; }
        __cxa_guard_release(&data_007279A8);
    }
    return &data_007279AC;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct Req5C { char storage[0x5c]; Req5C(u16, u32, bool); };
struct Elem { u8 pad[0x10]; float m10; };
struct AnimArr {
    u8 pad[0xc]; s32 mNum; s32 mMax; Elem* mData;
    Elem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
struct Vec3 { float x, y, z; };
struct A : Obj { u8 pad[0x3d0 - 4]; Vec3 m3d0; u8 pad2[0x3e8 - 0x3dc]; u32 m3e8; };
extern "C" char* data_00706E20;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
extern "C" void func_0016898C(AnimArr* a, const Req5C& r);
static inline A* dc(Obj* o) { if (isDerived(o)) return static_cast<A*>(o); return 0; }
static inline void cp(Vec3* d, const Vec3* s) { *d = *s; }
struct Self {
    u8 pad[0x464]; AnimArr* m464; u32 m468; u32 m46c; Vec3 m470; u32 m47c;
    void func_00389690();
};
void Self::func_00389690()
{
    func_0016898C(m464, Req5C(2, 0x37, false));
    (*m464)[0].m10 = 0.0f;
    A* a = dc(func_0052FBA0(data_00706E20 + 0x3dbbc, m46c));
    if (a) {
        cp(&m470, &a->m3d0);
        m47c = a->m3e8;
    }
}
