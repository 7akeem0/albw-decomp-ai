
/* L2C-SYMBOL __cxa_guard_acquire 00100174 */
/* L2C-NOP-SYMBOL __cxa_guard_release */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;
typedef int s32;
typedef struct TypeInfo { const void* vt; } TypeInfo;
extern u32 data_007276C0;
extern TypeInfo data_007276C4;
extern const char ro_006F6644[];
extern int __cxa_guard_acquire(u32* g);
extern void __cxa_guard_release(u32* g);
typedef struct Obj Obj;
typedef struct ObjVt {
    int (*checkDerived)(Obj* a, const TypeInfo* ti);
} ObjVt;
struct Obj { const ObjVt* vt; };

static const TypeInfo* getTI(void)
{
    if (!(data_007276C0 & 1) && __cxa_guard_acquire(&data_007276C0)) {
        { TypeInfo* t = &data_007276C4; t->vt = ro_006F6644; }
        __cxa_guard_release(&data_007276C0);
    }
    return &data_007276C4;
}
static int isDerived(Obj* a)
{
    const TypeInfo* ti = getTI();
    return a && a->vt->checkDerived(a, ti);
}
static Obj* dynCast(Obj* a) { if (isDerived(a)) return a; return 0; }


extern unsigned func_0049D1E8(unsigned);
extern unsigned func_0049A010(unsigned);
extern unsigned func_0049D8E0(unsigned);
void func_00496734(unsigned a0)
{
  unsigned r5, t2;
  func_0049D1E8(*(unsigned *)((char *)a0 + 0x1C));
  t2 = *(unsigned *)((char *)a0 + 0x20);
  r5 = (unsigned)dynCast((Obj*)t2);
  func_0049A010(r5);
  func_0049D8E0(*(unsigned *)((char *)a0 + 0x1C));
  return;
}
