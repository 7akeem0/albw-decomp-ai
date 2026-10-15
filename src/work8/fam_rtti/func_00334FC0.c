typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007268E0;
extern TypeInfo data_007268E4;
extern const char ro_006F5D74[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    void* s0;
    void* s1;
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007268E0 & 1) && __cxa_guard_acquire(&data_007268E0)) {
        { TypeInfo* t = &data_007268E4; t->vt = ro_006F5D74; }
        __cxa_guard_release(&data_007268E0);
    }
    return &data_007268E4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct Mgr { u8 pad[0x44]; Obj* m44; } Mgr;
extern Mgr* data_0070B728;
typedef struct Ev { u8 pad[0x18]; u8 m18; } Ev;
extern Ev* data_00709DF8;
typedef struct Self { u8 pad[0x2e0]; u32 m2E0; } Self;
extern void func_0014E138(Self* self, s32 b);
void func_00334FC0(Self* self, s32 b)
{
    Obj* o;
    func_0014E138(self, b);
    if (data_00709DF8->m18 != 0xf || b != 0) return;
    o = dynCast(data_0070B728->m44);
    if (o) self->m2E0 |= 2;
}
