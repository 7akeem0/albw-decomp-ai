/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct R_ { unsigned getU32(); unsigned getU32(unsigned max) { return (unsigned)(((unsigned long long)getU32() * max) >> 32); } };


/* L2C-SYMBOL _ZN2R_6getU32Ev 00111A64 */

extern char ro_00693810[];
extern char ro_00693814[];
extern char data_00715388[];
extern unsigned func_00588BE4(unsigned);
void func_0017AB94(unsigned a0)
{
  unsigned h901, k2, t1, t2, t3, t4, t5, t6;
  unsigned t7, t8, t9, t10, t11, t12, t13, t14;
  unsigned t15;
  t1 = func_00588BE4(a0);
  t2 = *(unsigned *)((char *)ro_00693810);
  if (t1 == t2) {
    *(unsigned *)((char *)a0 + 0x998) = 0;
    t3 = *(unsigned *)((char *)data_00715388);
    h901 = (unsigned)((R_ *)(t3))->getU32(500);
    t5 = t4; t5 = t5 * k2;
    t6 = h901;
    t7 = t6 + 0x190;
    *(unsigned *)((char *)a0 + 0x994) = t7;
  }
  t8 = func_00588BE4(a0);
  t9 = *(unsigned *)((char *)ro_00693810);
  if (t8 == t9) {
    t10 = *(unsigned *)((char *)a0);
    t11 = *(unsigned *)((char *)t10 + 0xAC);
    ((unsigned (*)(unsigned, unsigned, unsigned))t11)(a0, 3, (-1));
  }
  t12 = func_00588BE4(a0);
  t13 = *(unsigned *)((char *)ro_00693814);
  if (t12 == t13) {
    t14 = *(unsigned *)((char *)a0);
    t15 = *(unsigned *)((char *)t14 + 0xAC);
    ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t15)(a0, 2, (-1), t15);
    return;
  }
  return;
}
