typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00660F70(unsigned, unsigned);
extern unsigned func_001E5B90(unsigned, unsigned, unsigned, float, float, float, float, float);
unsigned func_0027F610(unsigned a0)
{
  unsigned h901, t4, t5;
  float x1, x2, x3;
  if (*(unsigned char *)((char *)a0 + 0x4C0) != 1) goto L3;
  t4 = (a0 + 0x400) + 0xBC;
  if ((int)*(unsigned *)((char *)a0 + 0x4BC) >= 0x6E) goto L3;
  func_00660F70(t4, 0);
  t5 = a0 + 0x3D0;
  x1 = *(float *)((char *)t5);
  x2 = *(float *)((char *)t5 + 4);
  x3 = *(float *)((char *)t5 + 8);
  h901 = a0;
  ((unsigned (*)(unsigned, unsigned, unsigned, float, float, float, float, float))func_001E5B90)(h901, 1, t5, x1, x2, x3, 1.2000000476837158f, 0.014999999664723873f);
  return 1;
L3:;
  return 0;
}
