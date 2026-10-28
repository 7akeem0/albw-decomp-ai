typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0014FAFC(unsigned, unsigned, float);
void func_001A56C8(unsigned a0, float fa0)
{
  unsigned t2, t4;
  float h901, s1, x1, x2, x4, x6;
  t2 = *(signed char *)((char *)(a0 + 0x800) + 0xC0);
  x2 = 0.05000000074505806f;
  if (t2 == 2) {
    x2 = 0.07000000029802322f;
  }
  s1 = x2;
  x1 = *(float *)((char *)a0 + 0x3E0);
  if (t2 != 2) {
    s1 = x2;
    if (t2 == 0) {
      s1 = 0.20000000298023224f;
    }
  }
  t4 = (a0 + 0x800) + 0xF8;
  x4 = *(float *)((char *)t4);
  h901 = fa0;
  x6 = x4 + ((h901 - x4) * s1);
  *(float *)((char *)t4) = x6;
  func_0014FAFC(a0, *(unsigned *)((char *)a0 + 0x3E8), x6);
  *(float *)((char *)a0 + 0x3E0) = x1;
  return;
}
