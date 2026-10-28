typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006E4A50[];
extern char data_00712450[];
extern unsigned func_0058080C(unsigned, unsigned);
extern unsigned func_0010F1F8(unsigned, unsigned);
extern unsigned func_004A1520(unsigned);
void func_0039FF18(unsigned a0)
{
  unsigned h901, h902, t2, t5, t6;
  *(unsigned *)((char *)a0) = (unsigned)ro_006E4A50;
  t2 = *(unsigned *)((char *)data_00712450) + 0x4C;
  h901 = t2;
  h902 = a0;
  t5 = func_0058080C(h901, *(unsigned *)((char *)t2 + 0xC) + h902);
  if ((int)t5 >= 0) {
    t6 = *(unsigned *)((char *)t2 + 0xC);
    func_0010F1F8(t6 + a0, t6);
    *(unsigned *)((char *)t2 + 8) = *(unsigned *)((char *)t2 + 8) + (-1);
  }
  func_004A1520(a0);
  return;
}
