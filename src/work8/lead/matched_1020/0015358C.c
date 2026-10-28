typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern float func_0058AC38(unsigned);
extern void func_004FB0A4(unsigned, float);
float func_0015358C(unsigned a0)
{
  unsigned t3;
  float x1;
  func_004FABDC(a0, 2, 0, 0);
  x1 = func_0058AC38(a0);
  func_004FB0A4(a0, x1);
  *(unsigned char *)((char *)a0 + 0x931) = 0;
  t3 = *(short *)((char *)a0 + 0x30) + (-1);
  *(unsigned *)((char *)a0 + 0x8FC) = (t3 + (t3 << 2)) << 1;
  *(float *)((char *)(a0 + 0x400) + 0x174) = 0.5f;
  return 0.5f;
}
