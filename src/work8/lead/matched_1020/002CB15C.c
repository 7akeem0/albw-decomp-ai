typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DC704[];
extern unsigned func_004A1520(unsigned);
void func_002CB15C(unsigned a0)
{
  unsigned h901, t1, t2, t3;
  *(unsigned *)((char *)a0) = (unsigned)ro_006DC704;
  h901 = a0 + 0x14;
  t1 = *(unsigned *)((char *)h901);
  *(unsigned char *)((char *)a0 + 0x18) = 1;
  if (t1 != 0) {
    t2 = 0;
    *(unsigned char *)((char *)t1 + 0xD9) = t2;
  }
  t3 = *(unsigned *)((char *)a0 + 0x10);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t3) + 0x10))(t3);
  func_004A1520(a0);
  return;
}
