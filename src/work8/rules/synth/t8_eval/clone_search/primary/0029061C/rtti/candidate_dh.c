
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00726CE8;
extern TypeInfo data_00726CEC;
extern const char ro_006F6278[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00726CE8 & 1) && __cxa_guard_acquire(&data_00726CE8)) {
        { TypeInfo* t = &data_00726CEC; t->vt = ro_006F6278; }
        __cxa_guard_release(&data_00726CE8);
    }
    return &data_00726CEC;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }


extern unsigned func_00364864(unsigned);
void func_0029061C(unsigned a0)
{
  unsigned r4, t2;
  if (*(unsigned short *)((char *)a0 + 0x42) != 34u) {
    return;
  }
  t2 = *(unsigned *)((char *)a0 + 0x48);
  r4 = (unsigned)dynCast((Obj*)t2);
  func_00364864(r4);
  return;
}
