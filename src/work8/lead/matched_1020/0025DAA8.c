typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070B960[];
extern char data_00712468[];
extern char data_007143B8[];
extern unsigned func_00122E08(unsigned);
extern void func_0029E40C(unsigned);
extern unsigned func_0014A998(unsigned, unsigned, unsigned);
extern void func_001E30E0(unsigned);
void func_0025DAA8(unsigned a0)
{
  unsigned t5, t10, t12, t15;
  func_00122E08(*(unsigned *)((char *)a0 + 0xF0));
  func_0029E40C(*(unsigned *)((char *)data_007143B8));
  t5 = (*(unsigned *)((char *)data_0070B960) + 0x2C00) + 0x1F;
  *(unsigned char *)((char *)t5) = *(unsigned char *)((char *)t5) & (-2);
  t10 = (*(unsigned *)((char *)data_0070B960) + 0x2C00) + 0x1E;
  t12 = *(unsigned char *)((char *)t10) & (-2);
  *(unsigned char *)((char *)t10) = t12;
  t15 = (*(unsigned *)((char *)data_0070B960) + 0x2C00) + 0x1F;
  *(unsigned char *)((char *)t15) = *(unsigned char *)((char *)t15) & (-3);
  func_0014A998(*(unsigned *)((char *)data_00712468), 1, t12);
  func_001E30E0(a0);
  return;
}
