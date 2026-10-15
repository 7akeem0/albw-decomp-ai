typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;

typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726900;
extern TypeInfo data_00726904;
extern const char ro_006F650C[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);

typedef struct Obj Obj;
typedef struct ObjVt { void* s0; void* s1; int (*checkDerived)(Obj* o, const TypeInfo* ti); } ObjVt;
struct Obj { const ObjVt* vt; };
typedef struct Mgr { u8 pad[0x44]; Obj* m44; } Mgr;
extern Mgr* data_0070B728;

extern void func_0037C6F0(void* self, s32 b);
extern int func_00588C3C(void* self);
extern void func_004E6E60(void* self);

static const TypeInfo* getTI(void)
{
    if (!(data_00726900 & 1) && __cxa_guard_acquire(&data_00726900)) {
        { TypeInfo* t = &data_00726904; t->vt = ro_006F650C; }
        __cxa_guard_release(&data_00726900);
    }
    return &data_00726904;
}

static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}

static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
void FUN_004e6674(void* self, s32 b)
{
    Obj* o;
    func_0037C6F0(self, b);
    if (b != 0 && !func_00588C3C(self)) return;
    o = data_0070B728->m44;
    o = dynCast(o);
    if (o != 0 || func_00588C3C(self)) func_004E6E60(self);
}

