typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726244;
extern TypeInfo data_00726248;
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
    if (!(data_00726244 & 1) && __cxa_guard_acquire(&data_00726244)) {
        { TypeInfo* t = &data_00726248; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726244);
    }
    return &data_00726248;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct A { Obj base; u8 pad[0x435 - 4]; u8 m435; } A;
typedef struct Msg { u8 pad[0x28]; u32 h; } Msg;
s32 func_0023C8F4(void* self, Msg* m)
{
    A* a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, m->h));
    if (a) a->m435 = 1;
    return 1;
}
