typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725B44;
extern TypeInfo data_00725B48;
extern const char ro_006F64F4[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
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
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern s32 func_00584E64(void* p);
typedef struct Self { u8 pad[0x50]; u32 m50; u8 pad54[0x34c - 0x54]; void* m34C; } Self;
static s32 call(Self* s) { if (s->m34C) return func_00584E64(s->m34C); return 0; }
s32 func_001505D0(Self* self)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m50);
    if (o != 0) {
        o = dynCast(o);
        if (o != 0) return call(self);
    }
    return 0;
}
