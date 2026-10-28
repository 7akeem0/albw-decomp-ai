typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930C4[];
extern char data_00706E20[];
extern unsigned func_0052EE94(unsigned);
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
unsigned func_003417D8(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t9;
  unsigned t10, t11, t12, t13, t14, t15, t16, t17;
  unsigned t18, t19;
  float x1, x2;
  t1 = *(unsigned short *)((char *)a1 + 0x20);
  t2 = t1 & 0x1F;
  if (t2 == 7) {
    t3 = t1 & 0x7E0;
    t4 = t3 >> 5;
    if (t4 != 12u) {
      return 0;
    }
    t5 = *(unsigned *)((char *)a0 + 0x24);
    t6 = func_0052EE94(t5);
    if (t6 == 0) goto L7;
  }
  t7 = *(unsigned short *)((char *)a1 + 0x20);
  if ((t7 & 0x1F) == 1) {
    t9 = t7 & 0x7E0;
  }
  if ((t7 & 0x1F) == 1 && (t9 == 704u)) {
    return 0;
  }
  if (((t7 & 0x1F) == 6 || (t7 & 0x1F) == 3) || (t7 & 0x1F) == 4) {
    return 0;
  }
  t10 = *(unsigned *)((char *)a1 + 0x28);
  t11 = *(unsigned *)((char *)data_00706E20);
  t12 = t11 + 0x3D800;
  t13 = t12 + 0x3BC;
  t14 = func_0052FBA0(t13, t10);
  if (t14 != 0) {
    t15 = func_00588BE4(t14);
    t16 = *(unsigned *)((char *)ro_006930C4);
    if (t16 == t15) {
      L7:;
      return 0;
    }
  }
  x1 = *(float *)((char *)a0 + 0x1D8);
  x2 = *(float *)((char *)a1 + 0x14);
  if (x2 > x1) {
    t17 = *(unsigned *)((char *)a1 + 0x10);
    *(unsigned *)((char *)a0 + 0x1D4) = t17;
    t18 = *(unsigned *)((char *)a1 + 0x14);
    *(unsigned *)((char *)a0 + 0x1D8) = t18;
    t19 = *(unsigned *)((char *)a1 + 0x18);
    *(unsigned *)((char *)a0 + 0x1DC) = t19;
  }
  return 1;
}
