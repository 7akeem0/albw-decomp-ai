
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_00727280;
extern TypeInfo data_00727284;
extern const char ro_006F5D50[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_00727280 & 1) && __cxa_guard_acquire(&data_00727280)) {
        { TypeInfo* t = &data_00727284; t->vt = ro_006F5D50; }
        __cxa_guard_release(&data_00727280);
    }
    return &data_00727284;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }


void func_0044DA44(unsigned a0, unsigned a1)
{
  unsigned r5;
  r5 = (unsigned)dynCast((Obj*)a1);
  *(unsigned *)((char *)a0 + 0x12C) = r5;
  *(unsigned *)((char *)a0 + 0x120) = *(unsigned *)((char *)r5 + 0x21C);
  *(unsigned *)((char *)a0 + 0x124) = *(unsigned *)((char *)r5 + 0x224);
  *(unsigned *)((char *)a0 + 0x128) = *(unsigned *)((char *)r5 + 0x22C);
  return;
}
