typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007278B8;
extern TypeInfo data_007278BC;
extern const char ro_006F6080[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007278B8 & 1) && __cxa_guard_acquire(&data_007278B8)) {
        { TypeInfo* t = &data_007278BC; t->vt = ro_006F6080; }
        __cxa_guard_release(&data_007278B8);
    }
    return &data_007278BC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }
extern char* data_00706E20;
extern Obj* func_0052FBA0(void* mgr, u32 h);
extern void* data_007142C8;
extern void func_00462C48(void* p, float x, float y, float z, s32 a, s32 b);
extern void func_0051C52C(void* p);
extern _Bool func_0058DA24(void* p);
extern void func_0065EB40(void* p, s32 v);
typedef struct A { Obj base; u8 pad[0x4c1 - 4]; u8 m4C1; u8 m4C2; u8 m4C3; u8 m4C4; } A;
typedef struct Self { u8 pad[0x1f6]; u16 m1F6; u8 pad1f8[0x250 - 0x1f8]; u8 m250[0x28]; u32 m278; } Self;
void func_00230050(Self* self)
{
    Obj* o = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m278);
    if (o != 0) {
        A* a = (A*)dynCast(o);
        if (a != 0) {
            u16 id;
            if (a->m4C3) {
                func_00462C48(data_007142C8, 28.0f, 232.0f, 60.0f, 1, 0);
                a->m4C3 = 0;
            }
            if (a->m4C1 == 8) {
                func_0051C52C(data_007142C8);
                func_0065EB40(self->m250, 5);
            }
            id = self->m1F6;
            if (id == 0xffff) {
                if (func_0058DA24(data_007142C8)) a->m4C4 = 1;
            }
        }
    }
}
