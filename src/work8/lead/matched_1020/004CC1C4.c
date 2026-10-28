typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_0069382C[];
extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
extern unsigned func_004F8254(unsigned, unsigned);
unsigned func_004CC1C4(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6;
  unsigned t7, t8, t9, t10, t11, t12, t13, t14;
  unsigned t15, t16, t17, t18, t19, t20, t21, t22;
  unsigned t23, t24;
  t1 = *(unsigned char *)((char *)a0 + 0x8C0);
  if (t1 == 5) {
    return 0;
  }
  t2 = *(unsigned *)((char *)a1 + 0x2C);
  if (t2 != 0) {
    t3 = *(unsigned char *)((char *)t2 + 1);
  }
  if ((t2 != 0) && (t3 != 14u)) {
    t4 = *(unsigned char *)((char *)t2);
    t5 = a0 + 0x900;
    t6 = t4 + (-8);
    if (t6 <= 4) {
      t23 = *(unsigned char *)((char *)t5 + 0x8E);
      if (t23 != 0) {
        return 0;
      }
    } else {
      t7 = *(unsigned *)((char *)a1 + 0x28);
      if (t7 == 0) goto L15;
      t8 = *(unsigned *)((char *)((unsigned)data_00706E20));
      t9 = t8 + 0x3D800;
      t10 = t9 + 0x3BC;
      t11 = func_0052FBA0(t10, t7);
      if (t11 == 0) goto L15;
      t12 = func_00588BE4(t11);
      t13 = *(unsigned *)((char *)((unsigned)ro_0069382C));
      if (t12 != t13) {
        t14 = *(unsigned *)((char *)((unsigned)data_00706E20));
        t15 = *(unsigned *)((char *)t11 + 0x50);
        t16 = t14 + 0x3D800;
        t17 = t16 + 0x3BC;
        t18 = func_0052FBA0(t17, t15);
        if (t18 == 0) goto L15;
        t19 = func_00588BE4(t18);
        t20 = *(unsigned *)((char *)((unsigned)ro_0069382C));
        if (t19 != t20) goto L15;
      }
      t21 = *(unsigned char *)((char *)t5 + 0x8F);
      if (t21 != 0) {
        return 0;
      }
      goto L14;
    }
    t24 = *(unsigned char *)((char *)a0 + 0x8E5);
    if (t24 != 2) goto L15;
    return 0;
    L14:;
    t22 = *(unsigned char *)((char *)a0 + 0x8E5);
    if (t22 == 4) {
      return 0;
    }
  }
  L15:;
  return func_004F8254(a0, a1);
}
