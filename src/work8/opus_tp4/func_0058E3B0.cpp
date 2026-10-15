typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef int s32;
struct TypeInfo { const void* vt; };
extern "C" u32 data_00725B44;
extern "C" TypeInfo data_00725B48;
extern "C" const char ro_006F64F4[];
extern "C" int __cxa_guard_acquire(u32* g);
extern "C" void __cxa_guard_release(u32* g);
struct Obj {
    virtual int checkDerived(const TypeInfo* ti);
    virtual void v04(); virtual void v08(); virtual void v0C(); virtual void v10();
    virtual void v14(); virtual void v18(); virtual void v1C(); virtual void v20();
    virtual void v24(); virtual void v28(); virtual void v2C(); virtual void v30();
    virtual void v34(); virtual void v38(); virtual void v3C(); virtual void v40();
    virtual void m44(s32 x, s32 y);
};
struct Der : Obj {};

static const TypeInfo* getTI()
{
    if (!(data_00725B44 & 1) && __cxa_guard_acquire(&data_00725B44)) {
        { TypeInfo* t = &data_00725B48; t->vt = ro_006F64F4; }
        __cxa_guard_release(&data_00725B44);
    }
    return &data_00725B48;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->checkDerived(ti);
}
extern "C" char* data_00706E20;
extern "C" Obj* func_0052FBA0(void* mgr, u32 h);
struct Self { u8 pad[0x2c]; s16 x; s16 y; };
struct Arg { u8 pad[0x28]; u32 h; };
extern "C" s32 func_0058E3B0(u8* p, Arg* a)
{
    Self* self = (Self*)(p - 0x40c);
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, a->h);
    if (o != 0) {
        if (!isDerived(o)) o = 0;
        Der* d = static_cast<Der*>(o);
        if (d != 0) { s16 y = self->y; s16 x = self->x; d->m44(x, y); }
    }
    return 0;
}
