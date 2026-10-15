typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00727898;
extern TypeInfo data_0072789C;
extern const char ro_006F6020[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00727898 & 1) && __cxa_guard_acquire(&data_00727898)) {
        { TypeInfo* t = &data_0072789C; t->vt = ro_006F6020; }
        __cxa_guard_release(&data_00727898);
    }
    return &data_0072789C;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern s32 func_00588BE4(Obj* a);
extern const s32 ro_00693984;
extern const s32 ro_00693218;
typedef struct A { Obj base; u8 pad[0x500 - 4]; s8 m500; } A;
typedef struct Msg { u8 pad[0x28]; u32 m28; void* m2C; } Msg;
s32 func_004E5504(void* self, Msg* m)
{
    Obj* o;
    if (m->m2C == 0) return 1;
    o = func_0052FBA0(data_00706E20 + 0x3dbbc, m->m28);
    if (o == 0) return 1;
    if (func_00588BE4(o) == ro_00693984) return 0;
    if (func_00588BE4(o) != ro_00693218) return 1;
    {
        A* a = (A*)dynCast(o);
        if (a) {
            s8 k = a->m500;
            if (k == 0 || k == 4 || k == 1) return 0;
        }
    }
    return 1;
}
