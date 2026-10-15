typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007266B8;
extern TypeInfo data_007266BC;
extern const char ro_006F6500[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007266B8 & 1) && __cxa_guard_acquire(&data_007266B8)) {
        { TypeInfo* t = &data_007266BC; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007266B8);
    }
    return &data_007266BC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct Vec3 { float x, y, z; } Vec3;
extern void func_002B3834(void* p, Vec3 v);
typedef struct Msg { u8 pad[0x10]; Vec3 m10; u8 pad1c[0x28 - 0x1c]; u32 m28; } Msg;
s32 func_002B49A0(void* self, Msg* m)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, m->m28);
    if (o != 0) {
        o = dynCast(o);
        if (o != 0) {
            func_002B3834(self, m->m10);
            func_002B3834(o, m->m10);
        }
    }
    return 1;
}
