typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726ED0;
extern TypeInfo data_00726ED4;
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
    if (!(data_00726ED0 & 1) && __cxa_guard_acquire(&data_00726ED0)) {
        { TypeInfo* t = &data_00726ED4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726ED0);
    }
    return &data_00726ED4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern u32 data_0070C3C8;
typedef struct Mgr { u8 pad[0x3dbc0]; void* m3DBC0; } Mgr;
extern Obj** func_005841A8(Mgr* mgr, u32 k, void* p);
typedef struct A { Obj base; u8 pad[0x4dc - 4]; u32 m4DC; } A;
typedef struct Self { u8 pad[0x2cc]; u32 m2CC; u8 pad2d0[0x414 - 0x2d0]; u8 m414[4]; } Self;
extern s32 func_00588BF0(Self* self, s32 v);
extern __attribute__((weak)) void func_0065BF44(void* p, s32 v);
void func_001C7300(Self* self)
{
    A* a;
    if (!func_00588BF0(self, 0)) return;
    {
        u32 k = data_0070C3C8;
        Mgr* mgr = (Mgr*)data_00706E20;
        a = (A*)dynCast(*func_005841A8(mgr, k, mgr->m3DBC0));
    }
    if (a) a->m4DC = self->m2CC;
    func_0065BF44(self->m414, 1);
}
