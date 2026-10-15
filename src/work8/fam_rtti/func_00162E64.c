typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00725E1C;
extern TypeInfo data_00725E20;
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
    if (!(data_00725E1C & 1) && __cxa_guard_acquire(&data_00725E1C)) {
        { TypeInfo* t = &data_00725E20; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00725E1C);
    }
    return &data_00725E20;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
typedef struct Info { u8 m0; u8 m1; } Info;
typedef struct Msg { u8 pad[0x28]; u32 m28; Info* m2C; } Msg;
typedef struct Self { u8 pad[0x8fc]; u32 m8FC; } Self;
extern void func_004F7E8C(Self* self, Msg* m);
void func_00162E64(Self* self, Msg* m)
{
    if (m->m2C != 0 && m->m2C->m1 == 9) {
        u32 h = m->m28;
        Obj* a = func_0052FBA0(data_00706E20 + 0x3dbbc, h);
        if (a == 0) return;
        a = dynCast(a);
        if (a) self->m8FC = h;
    }
    func_004F7E8C(self, m);
}
