typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004A4980(unsigned, unsigned, unsigned, float);
void func_0038A85C(unsigned a0, unsigned a1)
{
  unsigned t1, t3, ka4, ka1;
  float x1;
  ka1 = a0 + 0x78;
  t1 = *(unsigned *)((char *)ka1);
  *(unsigned *)((char *)a0 + 0x7C) = a1;
  if (t1 == a1) {
    return;
  }
  t3 = *(unsigned char *)((char *)a0 + 0x194) | 2;
  ka4 = a0 + 0x194;
  *(unsigned char *)((char *)ka4) = t3;
  x1 = *(float *)((char *)a0 + 0x190);
  func_004A4980((*(unsigned *)((char *)a0 + 0x74)), 0, t3, x1);
  return;
}
