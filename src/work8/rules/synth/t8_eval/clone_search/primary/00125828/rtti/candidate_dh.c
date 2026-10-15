
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007266A8;
extern TypeInfo data_007266AC;
extern const char ro_006F6500[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007266A8 & 1) && __cxa_guard_acquire(&data_007266A8)) {
        { TypeInfo* t = &data_007266AC; t->vt = ro_006F6500; }
        __cxa_guard_release(&data_007266A8);
    }
    return &data_007266AC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }


extern char data_00706E20[];
extern void func_004F8638(unsigned, unsigned);
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_002A9934(void);
unsigned func_00125828(unsigned a0)
{
  unsigned r0, t5;
  func_004F8638(a0, (-1));
  t5 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, *(unsigned *)((char *)a0 + 0x8E0));
  r0 = t5;
  if (t5 != 0) {
  r0 = (unsigned)dynCast((Obj*)t5);
    if (r0 == 0) {
      return r0;
    }
    return func_002A9934();
  }
}
