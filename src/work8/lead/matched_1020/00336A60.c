typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006936C4[];
extern char ro_006936E8[];
extern char ro_006936F0[];
extern char ro_00693710[];
extern char ro_00693714[];
extern char ro_00693768[];
static unsigned arrAt_C_14(unsigned a, int i) { return (unsigned)i < *(unsigned *)(a + 0xC) ? *(unsigned *)(a + 0x14) + i * 4 : *(unsigned *)(a + 0x14); }
unsigned func_00336A60(unsigned a0, unsigned a1)
{
  unsigned h901, r1, t1, t2, t3, t4, t5, t6;
  unsigned t7, t8, t9, t10, t11, t13, t14, t15;
  unsigned t17;
  t1 = *(unsigned *)((char *)ro_006936F0);
  t2 = a1;
  if (a1 == t1) {
    t2 = 0;
  }
  r1 = t2;
  if (a1 != t1) {
    t3 = *(unsigned *)((char *)ro_006936C4);
    t4 = t2;
    if (t2 == t3) {
      t4 = 1;
    }
    r1 = t4;
    if (t2 != t3) {
      t5 = *(unsigned *)((char *)ro_006936E8);
      t6 = t4;
      if (t4 == t5) {
        t6 = 2;
      }
      r1 = t6;
      if (t4 != t5) {
        t7 = *(unsigned *)((char *)ro_00693714);
        t8 = t6;
        if (t6 == t7) {
          t8 = 3;
        }
        r1 = t8;
        if (t6 != t7) {
          t9 = *(unsigned *)((char *)ro_00693710);
          t10 = t8;
          if (t8 == t9) {
            t10 = 4;
          }
          r1 = t10;
          if (t8 != t9) {
            t11 = *(unsigned *)((char *)ro_00693768);
            r1 = t10 == t11 ? 5 : 6;
          }
        }
      }
    }
  }
  t13 = a0 + 0x450;
  t14 = t13;
  if (r1 < 7) {
    t14 = t13 + (r1 << 2);
  }
  t15 = *(unsigned *)((char *)t14);
  t17 = arrAt_C_14(t15, 0);
  h901 = t17 + 0x10;
  *(float *)((char *)h901) = 1.0f;
  return t17;
}
