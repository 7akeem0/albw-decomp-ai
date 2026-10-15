typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726E20;
extern TypeInfo data_00726E24;
extern const char ro_006F61C4[];
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
    if (!(data_00726E20 & 1) && __cxa_guard_acquire(&data_00726E20)) {
        { TypeInfo* t = &data_00726E24; t->vt = ro_006F61C4; }
        __cxa_guard_release(&data_00726E20);
    }
    return &data_00726E24;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
typedef struct V { u8 d[4]; } V;
typedef struct A { Obj base; u8 pad[0x7f8 - 4]; V m7F8; } A;
typedef struct Self { u8 pad[0x7f8]; V m7F8; } Self;
extern void func_0053AB8C(Self* self, Obj* o);
extern void func_0058FBCC(V* a, const V* b);
void func_0055A3DC(Self* self, Obj* o)
{
    A* a;
    func_0053AB8C(self, o);
    a = (A*)dynCast(o);
    if (a) {
        V* d = &a->m7F8;
        func_0058FBCC(d, &self->m7F8);
    }
}
