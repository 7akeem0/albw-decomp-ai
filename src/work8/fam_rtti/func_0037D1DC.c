typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726DF0;
extern TypeInfo data_00726DF4;
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
    if (!(data_00726DF0 & 1) && __cxa_guard_acquire(&data_00726DF0)) {
        { TypeInfo* t = &data_00726DF4; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00726DF0);
    }
    return &data_00726DF4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void func_004CF478(void* p, s32 a, s32 b);
extern void func_00151148(void* q, s32 a);
typedef struct A { Obj base; u8 pad[0x40c - 4]; void* m40C; void* m410; u8 pad414[0x42b - 0x414]; u8 m42B; } A;
typedef struct Self { u32 m0; } Self;
void func_0037D1DC(Self* self)
{
    A* a;
    if (self->m0 == 0) return;
    a = (A*)dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m0));
    if (a) {
        void* p = a->m40C;
        void* q;
        a->m42B = 0;
        q = a->m410;
        if (p && q) {
            func_004CF478(p, 1, 0);
            func_00151148(q, 1);
        }
    }
}
