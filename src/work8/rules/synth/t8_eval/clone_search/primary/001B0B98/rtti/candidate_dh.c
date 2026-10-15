
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
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


extern char data_00706E20[];
extern unsigned func_001AFCB4(unsigned);
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_0018EB94(void);
unsigned func_001B0B98(unsigned a0, unsigned a1)
{
  unsigned r4, t5;
  if (a1 != 4) {
    return a0;
  }
  func_001AFCB4(a0);
  t5 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, *(unsigned *)((char *)a0 + 0xA18));
  r4 = (unsigned)dynCast((Obj*)t5);
  if (r4 != 0) {
    return func_0018EB94();
  }
  return r4;
}
