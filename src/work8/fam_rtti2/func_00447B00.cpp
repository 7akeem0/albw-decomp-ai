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
struct X : Obj { u8 pad[0x7c - 4]; u8 m7C; };
struct G { u8 pad[0x44]; Obj* m44; };
struct E { u8 pad[0x35]; u8 m35; u8 pad2[0x38 - 0x36]; };
struct Arr {
    u8 pad[8]; u32 m8; E* mC;
    E& operator[](s32 i) { if ((u32)i < m8) return mC[i]; return mC[0]; }
};
extern "C" G* data_0070B728;
struct Self;
extern "C" void func_00449C40(Self* s);
extern "C" void func_0044AEC8(Self* s);
extern "C" void func_0066CC58(void* p, s32 v);
struct Self {
    u8 pad[0x1c]; Arr* m1C; u8 pad1[0xca - 0x20]; s16 mCA; u8 pad2[0x158 - 0xcc]; u8 m158[0x260 - 0x158]; float m260; u8 pad3[0x295 - 0x264]; u8 m295;
    void func_00447B00();
};
void Self::func_00447B00()
{
    Obj* o = data_0070B728->m44;
    if (!isDerived(o)) o = 0;
    X* x = static_cast<X*>(o);
    if (x && x->m7C == 3) {
        func_00449C40(this);
        if (m260 <= 0.0f) m260 = 1.0f;
        func_0044AEC8(this);
    }
    if (m260 == 0.0f) {
        s16 i = mCA;
        Arr* a = m1C;
        if (i < 0 || !(*a)[i].m35) func_0066CC58(m158, 2);
    }
    m295 = 1;
}
