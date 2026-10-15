typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef float f32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_007260E4;
extern "C" TypeInfo data_007260E8;
extern "C" const char ro_006F6314[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);

static const TypeInfo* getTI()
{
    if (!(data_007260E4 & 1) && __cxa_guard_acquire(&data_007260E4)) {
        { TypeInfo* t = &data_007260E8; t->vt = ro_006F6314; }
        __cxa_guard_release(&data_007260E4);
    }
    return &data_007260E8;
}
struct Obj {
    virtual bool checkDerived(const TypeInfo* ti) const;
};
static bool isDerived(const Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
struct D : Obj { u8 pad[0x3d0 - 4]; u8 m3D0[4]; };
struct G { u8 pad[0x1c]; void* m1C; };
extern "C" G* data_0070FB60;
struct Self;
extern "C" Obj* func_0030C4D0(Self* s);
extern "C" void func_0030CBE4(Self* s, void* p);
extern "C" void func_0030A434(Self* s);
struct Self {
    u8 pad[0x8c]; s32 m8C; u8 pad1[0xd4 - 0x90]; u8 mD4; u8 mD5; u8 mD6;
    void func_0030C78C();
};
void Self::func_0030C78C()
{
    if (mD6 && mD4) {
        s32 k = m8C;
        Self* s = this;
        if (k == 100) {
            func_0030CBE4(this, data_0070FB60->m1C);
        } else {
            Obj* o = func_0030C4D0(s);
            if (!isDerived(o)) o = 0;
            D* d = static_cast<D*>(o);
            if (d) func_0030CBE4(this, d->m3D0);
        }
    }
    func_0030A434(this);
}
