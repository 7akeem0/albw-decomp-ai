typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006A63D4[];
extern void func_0012C790(unsigned);
extern unsigned func_00478E08(unsigned, unsigned);
extern unsigned func_00479E9C(unsigned);
extern void func_0043CE2C(unsigned);
void func_0043DC28(unsigned a0)
{
  unsigned h901, t1, t5, t7, t8;
  t1 = *(unsigned *)((char *)a0 + 0x148);
  if (t1 != 0) {
    func_0012C790(t1);
  }
  func_00478E08(*(unsigned *)((char *)a0 + 0x158), *(unsigned char *)((char *)a0 + 0x19C));
  t5 = func_00479E9C(*(unsigned *)((char *)a0 + 0x158));
  if (t5 != 0) {
    func_0043CE2C(a0);
  } else {
    t7 = *(unsigned *)((char *)ro_006A63D4);
    t8 = *(unsigned *)((char *)(unsigned)ro_006A63D4 + 4);
    h901 = a0 + 0x190;
    *(unsigned *)((char *)h901) = a0;
    *(unsigned *)((char *)a0 + 0x194) = t7;
    *(unsigned *)((char *)(a0 + 0x194) + 4) = t8;
  }
  *(unsigned short *)((char *)a0 + 0x174) = 0;
  return;
}
