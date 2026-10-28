typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0024ADF4(unsigned, unsigned, float, float);
extern void func_0014FAFC(unsigned, unsigned, float);
extern unsigned func_004CF478(unsigned, unsigned, unsigned, float, float, float);
extern unsigned func_00151148(unsigned, unsigned);
void func_0024AB60(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  float x1, x3, x4, x5, x6, x7, x8;
  float x9, x10, x11, x12, x13, x14;
  func_0024ADF4(a0, 0, 0.0f, 1.0f);
  x1 = *(float *)((char *)a0 + 0xC);
  t1 = a0 + 0x400;
  t2 = t1 + 0x7C;
  t3 = a0 + 0x400;
  *(float *)((char *)a0 + 0x3D4) = (x1 + 9.0f);
  t4 = *(unsigned *)((char *)a0 + 0x3D0);
  *(unsigned *)((char *)a0 + 0x47C) = t4;
  t5 = *(unsigned *)((char *)a0 + 0x3D4);
  *(unsigned *)((char *)a0 + 0x480) = t5;
  x3 = *(float *)((char *)a0 + 0x3D8);
  *(float *)((char *)t2 + 8) = x3;
  x4 = *(float *)((char *)t2);
  x5 = *(float *)((char *)a0 + 8);
  x6 = *(float *)((char *)a0 + 0x10);
  x7 = x4 - x5;
  x8 = x3 - x6;
  x9 = x7 * x7;
  x10 = x9 + (x8 * x8);
  x11 = __sqrtf(x10);
  *(float *)((char *)t3 + 0x88) = x11;
  t6 = *(unsigned *)((char *)a0 + 0x24);
  *(unsigned *)((char *)a0 + 0x3E8) = t6;
  func_0014FAFC(a0, t6, 0.07000000029802322f);
  x12 = *(float *)((char *)t3 + 0x88);
  x13 = x12 * 14.285714149475098f;
  x14 = (-9.0f) / x13;
  *(float *)((char *)a0 + 0x3E0) = x14;
  t7 = *(unsigned *)((char *)a0 + 0x40C);
  func_004CF478(t7, 1, 0, (-9.0f), x13, x14);
  t8 = *(unsigned *)((char *)a0 + 0x418);
  func_00151148(t8, 1);
  *(unsigned *)((char *)a0 + 0x444) = 0;
  return;
}
