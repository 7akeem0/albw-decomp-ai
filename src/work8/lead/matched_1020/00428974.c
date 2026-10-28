typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00524708(unsigned);
extern unsigned func_0017A190(unsigned);
void func_00428974(unsigned a0)
{
  unsigned h901, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9;
  t1 = *(unsigned *)((char *)a0 + 4);
  if (t1 != 0) {
    t2 = *(unsigned *)((char *)a0);
    t3 = func_00524708(t2);
    t4 = *(unsigned *)((char *)a0);
    h901 = t4 + 0x32;
    *(unsigned short *)((char *)h901) = 0;
    *(unsigned char *)((char *)t4 + 0x3D) = 0;
    t5 = *(unsigned *)((char *)t1);
    t6 = *(unsigned *)((char *)a0);
    t7 = *(unsigned *)((char *)t5 + 0x60);
    t8 = *(unsigned *)((char *)t6 + 8);
    ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t7)(t1, t8, 0, t3);
    t9 = *(unsigned *)((char *)a0);
    func_0017A190(t9);
    return;
  }
  return;
}
