typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DBB28[];
extern char data_0070BCD0[];
extern unsigned func_0010F1F8(unsigned, unsigned);
extern unsigned func_004A1520(unsigned);
void func_00388028(unsigned a0)
{
  unsigned h901, t1, t3, t4, t5, t6;
  *(unsigned *)((char *)a0) = (unsigned)ro_006DBB28;
  h901 = a0 + 0x14;
  t1 = *(unsigned *)((char *)h901);
  if ((t1 != 0) || (*(unsigned *)((char *)a0 + 0x10) != 0)) {
    t3 = *(signed char *)((char *)a0 + 0xA2);
    t4 = *(unsigned *)((char *)data_0070BCD0);
    t5 = t4 + 0x118;
    t6 = t3 < 2 ? (t5 + (t3 << 4)) : t5;
    func_0010F1F8(*(unsigned *)((char *)t6 + 0xC) + a0, t4);
    *(unsigned *)((char *)t6 + 8) = *(unsigned *)((char *)t6 + 8) + (-1);
  }
  func_004A1520(a0);
  return;
}
