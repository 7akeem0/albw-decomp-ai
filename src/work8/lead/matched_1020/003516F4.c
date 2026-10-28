typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693060[];
extern char ro_00693064[];
extern char ro_00693068[];
extern char ro_00693074[];
extern char data_00706E20[];
extern unsigned func_0052FBA0(unsigned, unsigned);
extern unsigned func_00588BE4(unsigned);
unsigned func_003516F4(unsigned a0, unsigned a1)
{
  unsigned h901, h902, h903, h904, t1, t8, t9;
  t1 = *(unsigned short *)((char *)a1 + 0x20);
  if ((t1 & 0x800) != 0) goto L8;
  if ((t1 & 0x1F) == 6) goto L8;
  if ((t1 & 0x7E0) == 448u) goto L8;
  t8 = func_0052FBA0((*(unsigned *)((char *)data_00706E20) + 0x3D800) + 0x3BC, *(unsigned *)((char *)a1 + 0x28));
  if (t8 == 0) goto L9;
  t9 = func_00588BE4(t8);
  h901 = *(unsigned *)((char *)ro_00693060);
  if (t9 == h901) goto L8;
  h902 = *(unsigned *)((char *)ro_00693064);
  if (t9 == h902) goto L8;
  h903 = *(unsigned *)((char *)ro_00693068);
  if (t9 == h903) goto L8;
  h904 = *(unsigned *)((char *)ro_00693074);
  if (t9 != h904) goto L9;
L8:;
  return 0;
L9:;
  return 1;
}
