typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930E0[];
extern char ro_0069382C[];
extern char ro_00693904[];
extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
unsigned func_0027D5D8(unsigned a0, unsigned a1)
{
  unsigned r0, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11, t12, t13, t14;
  t1 = *(unsigned *)((char *)a1 + 0x28);
  t2 = *(unsigned *)((char *)data_00706E20);
  t3 = t2 + 0x3D800;
  t4 = t3 + 0x3BC;
  t5 = func_0052FBA0(t4, t1);
  r0 = t5;
  if (t5 != 0) {
    t6 = *(unsigned *)((char *)a1 + 0x34);
    if (t6 != 0) {
      t7 = *(unsigned short *)((char *)t6 + 4);
      t8 = t7 & 0xFF;
      if ((t8 == 3) || (t8 == 12u)) {
        r0 = 1;
        return r0;
      }
    }
    t9 = func_00588BE4(t5);
    t10 = *(unsigned *)((char *)ro_00693904);
    if (t9 == t10) {
      r0 = 1;
      return r0;
    }
    t11 = func_00588BE4(t5);
    t12 = *(unsigned *)((char *)ro_0069382C);
    if (t11 == t12) {
      r0 = 1;
      return r0;
    }
    t13 = func_00588BE4(t5);
    t14 = *(unsigned *)((char *)ro_006930E0);
    r0 = t13;
    if (t13 != t14) {
      r0 = 0;
    }
    if (t13 != t14) {
      return r0;
    }
    r0 = 1;
  }
  return r0;
}
