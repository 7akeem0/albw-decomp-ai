typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726B10;
extern TypeInfo data_00726B14;
extern const char ro_006F5D5C[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00726B10 & 1) && __cxa_guard_acquire(&data_00726B10)) {
        { TypeInfo* t = &data_00726B14; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726B10);
    }
    return &data_00726B14;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern const u32 ro_00693518;
typedef struct Mgr { u8 pad[0x3dbc0]; void* m3DBC0; u8 pad2[4]; Obj** m3DBC8; } Mgr;
extern Obj** func_005841A8(Mgr* mgr, u32 k, void* p);
typedef struct A { Obj base; u8 pad[0x424 - 4]; u32 m424; u32 m428; } A;
void func_003315C0(void)
{
    Mgr* m = (Mgr*)data_00706E20;
    u32 k = ro_00693518;
    Obj** it = func_005841A8(m, k, ((Mgr*)data_00706E20)->m3DBC0);
    if (it != ((Mgr*)data_00706E20)->m3DBC8) {
        Obj* o = *it;
        if (o != 0) {
            A* a = (A*)dynCast(o);
            if (a) { a->m428 = 60; a->m424 = 0; }
        }
    }
}
