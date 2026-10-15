typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726900;
extern TypeInfo data_00726904;
extern const char ro_006F650C[];
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
typedef struct Mgr { u8 pad[0x44]; Obj* m44; } Mgr;
extern Mgr* data_0070B728;
extern void func_004F68AC(void* self, s32 b);
extern void func_004FACD4(void* self, s32 v);
void func_004FEC4C(void* self, s32 b)
{
    Obj* o;
    func_004F68AC(self, b);
    if (b != 0) return;
    o = dynCast(data_0070B728->m44);
    if (o) func_004FACD4(self, 1);
}
