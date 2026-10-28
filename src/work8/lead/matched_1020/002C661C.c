typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693358[];
extern char ro_0069335C[];
extern char ro_00693360[];
extern char data_00706E20[];
extern char data_0070FB60[];
extern unsigned func_00556E64(unsigned);
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
extern unsigned func_0028FE00(unsigned, unsigned);
unsigned func_002C661C(void)
{
  unsigned h901, h902, h903, t2, t5, t9, t10, t12;
  unsigned t14;
  t2 = func_00556E64(*(unsigned *)((char *)data_0070FB60));
  if (t2 != 0) {
    t5 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)data_0070FB60) + 0x28) + 0x14);
    if (t5 != 0) {
      t9 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, t5);
      t10 = func_00588BE4(t9);
      h901 = *(unsigned *)((char *)ro_00693358);
      if (t10 != h901) {
        t12 = func_00588BE4(t9);
        h902 = *(unsigned *)((char *)ro_0069335C);
        if (t12 != h902) {
          t14 = func_00588BE4(t9);
          h903 = *(unsigned *)((char *)ro_00693360);
          if (t14 != h903) goto L6;
        }
      }
      func_0028FE00(*(unsigned *)((char *)data_0070FB60), 1);
      return 1;
    }
  }
  L6:;
  return 0;
}
