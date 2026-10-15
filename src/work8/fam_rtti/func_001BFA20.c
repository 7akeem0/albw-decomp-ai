typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726274;
extern TypeInfo data_00726278;
extern const char ro_006F605C[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00726274 & 1) && __cxa_guard_acquire(&data_00726274)) {
        { TypeInfo* t = &data_00726278; t->vt = ro_006F605C; }
        __cxa_guard_release(&data_00726274);
    }
    return &data_00726278;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct Self { u8 pad[0x2c]; u16 m2C; u8 pad2e[0x2cc - 0x2e]; u32 m2CC; u8 pad2d0[0x498 - 0x2d0]; u8 m498[4]; } Self;
extern _Bool func_00588BF0(Self* self, s32 v);
extern __attribute__((weak)) void func_0065B668(void* p, s32 v);
void func_001BFA20(Self* self)
{
    Obj* a = dynCast(func_0052FBA0(data_00706E20 + 0x3dbbc, self->m2CC));
    void* p;
    if (a) return;
    p = self->m498;
    if (self->m2C != 0) {
        if (!func_00588BF0(self, 0)) return;
    } else {
        if (func_00588BF0(self, 0)) return;
    }
    func_0065B668(p, 2);
}
