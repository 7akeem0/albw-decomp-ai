
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
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


extern char ro_00693A4C[];
extern char data_00706E20[];
extern unsigned func_00665A3C(unsigned, unsigned);
extern unsigned func_005841A8(unsigned, unsigned, unsigned);
extern unsigned func_00391558(void);
unsigned func_003367F0(unsigned a0)
{
  unsigned r4, t3, t4, t5, t6, t7;
  func_00665A3C((a0 + 0x400) + 0x14, 1);
  t3 = *(unsigned *)((char *)data_00706E20);
  t4 = *(unsigned *)((char *)ro_00693A4C);
  t5 = *(unsigned *)((char *)t3 + 0x3DBC0);
  t6 = func_005841A8(t3, t4, t5);
  t7 = *(unsigned *)((char *)t6);
  r4 = (unsigned)dynCast((Obj*)t7);
  if (r4 != 0) {
    return func_00391558();
  }
  return r4;
}
