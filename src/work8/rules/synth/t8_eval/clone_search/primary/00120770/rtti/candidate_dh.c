
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00727978;
extern TypeInfo data_0072797C;
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
    if (!(data_00727978 & 1) && __cxa_guard_acquire(&data_00727978)) {
        { TypeInfo* t = &data_0072797C; t->vt = ro_006F5D5C; }
        __cxa_guard_release(&data_00727978);
    }
    return &data_0072797C;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }


extern unsigned func_00509FA0(void);
unsigned func_00120770(unsigned a0)
{
  unsigned r4;
  r4 = (unsigned)dynCast((Obj*)a0);
  if (r4 != 0) {
    return func_00509FA0();
  }
  return r4;
}
