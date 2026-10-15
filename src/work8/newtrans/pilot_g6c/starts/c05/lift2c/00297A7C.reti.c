typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DA4E4[];
extern unsigned func_0049BE50(unsigned);
extern unsigned func_0049C008(unsigned);
unsigned func_00297A7C(unsigned a0)
{
  unsigned t1;
  t1 = *(unsigned *)((char *)a0 + 0x78);
  *(unsigned *)((char *)a0) = (unsigned)ro_006DA4E4;
  *(unsigned *)((char *)a0 + 0x18) = (unsigned)ro_006DA4E4 + 0x4C;
  if (t1 != 0) {
    if ((t1 != 3) && (t1 != 4)) {
      ((unsigned (*)(unsigned, unsigned))*(unsigned *)((char *)(unsigned)ro_006DA4E4 + 0x24))(a0, 1);
    } else {
      func_0049BE50(a0);
    }
  }
  return func_0049C008(a0);
}
