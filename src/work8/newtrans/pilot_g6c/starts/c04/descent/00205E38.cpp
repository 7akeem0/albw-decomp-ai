/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_00205E38_1_2(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern char data_0070A748[];
extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_0058A7D4(unsigned);
float func_00205E38(unsigned a0)
{
  unsigned h901, h902, r0, t2, t3, t4, t7, t8;
  unsigned t9, t11, t12, t13;
  func_004FABDC(a0, 0, (-1), 0);
  t2 = a0 + 0x900;
  if (*(unsigned char *)((char *)a0 + 0x905) == 0) {
    t3 = func_0058A7D4(a0);
    t4 = (unsigned)bind_00205E38_1_2(t3, 4U);
    *(unsigned char *)((char *)a0 + 0x904) = t4;
  }
  t7 = *(signed char *)((char *)t2 + 4);
  r0 = t7;
  if (t7 != 0) {
    t8 = t7;
    if (t7 == 1) {
      t8 = 0x40000000;
    }
    r0 = t8;
    if (t7 != 1) {
      t9 = t8;
      if (t8 == 2) {
        t9 = (-2147483647-1);
      }
      r0 = t9;
      if (t8 != 2) {
        r0 = t9;
        if (t9 == 3) {
          r0 = (-1073741824);
        }
        if (t9 != 3) goto L7;
      }
    }
  }
  *(unsigned *)((char *)a0 + 0x908) = r0;
  L7:;
  t11 = *(unsigned *)((char *)a0 + 0x3E8);
  t12 = *(unsigned *)((char *)a0 + 0x908);
  t13 = t11;
  if (t11 == t12) {
    t13 = 0;
  }
  if (t11 == t12) {
    *(unsigned *)((char *)a0 + 0x4FC) = t13;
  }
  if (t11 == t12) goto L12;
  if (t11 >= t12) goto L13;
  if ((t12 - t13) > 2147483648u) goto L15;
  goto L14;
  L11:;
  *(unsigned *)((char *)a0 + 0x4FC) = r0;
  L12:;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  return 0.0f;
  L13:;
  if ((t13 - t12) <= 2147483648u) goto L15;
  L14:;
  h901 = (unsigned)data_0070A748 + 4;
  r0 = *(unsigned *)((char *)h901);
  goto L11;
  L15:;
  h902 = (unsigned)data_0070A748 + 4;
  r0 = *(unsigned *)((char *)a0 + 0x4FC) - *(unsigned *)((char *)h902);
  goto L11;
}
