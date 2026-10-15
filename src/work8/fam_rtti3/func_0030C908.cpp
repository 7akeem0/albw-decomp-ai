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
struct D : Obj { virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual bool start(u8 a, bool b); virtual void restart(u8 a, bool b);
    u8 pad[0x3d0 - 4]; u8 m3D0[4]; };
struct G { u8 pad[0x1c]; void* m1C; };
extern "C" G* data_0070FB60;
struct Self;
extern "C" Obj* func_0030C4D0(Self* s, s32 id);
extern "C" void func_0030CBE4(Self* s, void* p);
extern "C" s32 func_0028F1C0(G* g);
struct Self {
    u8 pad[0x8c]; s32 m8C; u8 pad1[0xd4 - 0x90]; u8 mD4;
    bool func_0030C908(s32 a, s32 b, s32 id, s32 flag);
};
bool Self::func_0030C908(s32 a, s32 b, s32 id, s32 flag)
{
    m8C = id;
    if (id == 100) {
        if (mD4) func_0030CBE4(this, data_0070FB60->m1C);
        if (flag == 0) {
            if (func_0028F1C0(data_0070FB60)) return false;
        }
    } else {
        s32 k = id;
        Obj* o = func_0030C4D0(this, k);
        if (!isDerived(o)) o = 0;
        D* d = static_cast<D*>(o);
        if (d) {
            if (mD4) func_0030CBE4(this, d->m3D0);
            if (flag) {
                d->restart((u8)a, b != 0);
                return true;
            }
            if (!d->start((u8)a, b != 0)) return false;
        }
    }
    return true;
}
