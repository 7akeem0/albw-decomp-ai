typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006930E0[];
extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
extern unsigned func_00659CDC(unsigned, unsigned);
unsigned func_00198A6C(unsigned a0, unsigned a1)
{
  unsigned h901, r0, t5, t6, t7, t9, t11;
  t5 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, *(unsigned *)((char *)a1 + 0x28));
  r0 = t5;
  if (t5 != 0) {
    t6 = func_00588BE4(t5);
    t7 = *(unsigned *)((char *)a0 + 0x50);
    r0 = t6;
    if (t6 == t7) {
      r0 = 0;
    }
    if (t6 != t7) {
      t9 = func_00588BE4(t5);
      h901 = *(unsigned *)((char *)ro_006930E0);
      if (t9 != h901) {
        t11 = *(unsigned *)((char *)a1 + 0x34);
        if (t11 == 0) goto L6;
        if ((*(unsigned short *)((char *)t11 + 4) & 0xFF) != 2) goto L6;
      }
      func_00659CDC(a0 + 0x420, 1);
      L6:;
      r0 = 1;
    }
  }
  return r0;
}
