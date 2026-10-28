typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00547B48(unsigned, unsigned);
void func_0036772C(unsigned a0)
{
  unsigned k1, r0, r4, r5, r6, r7, t2;
  unsigned t5, t6, t7, t8, t9, t10, t11, t12;
  unsigned t13, t15, t17, t18, t20;
  r5 = a0 + 0x318;
  t2 = *(unsigned *)((char *)a0 + 0x324);
  k1 = 1;
  r4 = t2 + (-8);
  r6 = a0;
  if (r4 != r5) {
  }
  r7 = k1;
  if (r4 != r5) {
    do {
      t5 = *(unsigned char *)((char *)r4 + 6);
      if (t5 == 0) {
        t6 = *(unsigned *)((char *)((unsigned)data_00706E20));
        t7 = *(unsigned *)((char *)r4);
        t8 = t6 + 0x3D800;
        t9 = t8 + 0x3BC;
        t10 = func_0052FBA0(t9, t7);
        if (t10 != 0) {
          t11 = t10 + 4;
          t12 = func_00547B48(t11, 0);
          if (t12 != 0) {
            *(unsigned char *)((char *)r4 + 6) = r7;
          }
          if (t12 == 0) goto L5;
        }
      }
      t13 = *(unsigned *)((char *)r4 + 0xC);
      r4 = t13 + (-8);
    } while (r4 != r5);
  }
  L5:;
  t15 = *(unsigned *)((char *)r6 + 0x320);
  r0 = t15 + (-8);
  if (r0 != r5) {
    do {
      t17 = *(unsigned char *)((char *)r0 + 6);
      if (t17 == 0) goto L9;
      t18 = *(unsigned *)((char *)r0 + 8);
      r0 = t18 + (-8);
    } while (r0 != r5);
  }
  *(unsigned char *)((char *)r6 + 0x93D) = r7;
  t20 = *(unsigned short *)((char *)r6 + 0x32);
  *(unsigned short *)((char *)r6 + 0x93A) = t20;
  L9:;
  return;
}
