typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004D8054(unsigned, unsigned, float);
void func_002D13A4(unsigned a0, unsigned a1, float fa0)
{
  unsigned k1, t1, t2, t4, t5, t6;
  float x1, x2, x3, x4;
  k1 = 0;
  *(unsigned char *)((char *)a0 + 0x19) = a1;
  *(unsigned char *)((char *)a0 + 0x18) = k1;
  *(float *)((char *)a0 + 0x1C) = 0.0f;
  t1 = *(unsigned *)((char *)a0 + 0x10);
  t2 = *(unsigned *)((char *)a0 + 0x14);
  x1 = fa0;
  if (a1 == 0) {
    x1 = -fa0;
  }
  func_004D8054(t1, (*(unsigned *)((char *)t2)), x1);
  t4 = *(unsigned *)((char *)a0 + 0x10);
  x2 = *(float *)((char *)t4 + 4);
  x3 = (x2 > 0.0f) ? x2 : 0.0f;
  *(float *)((char *)t4 + 4) = x3;
  x4 = x3 + 0.25f;
  t5 = *(unsigned *)((char *)a0 + 0x10);
  *(float *)((char *)t5 + 4) = x4;
  t6 = *(unsigned *)((char *)a0 + 8);
  *(unsigned *)((char *)t6 + 0xAC) = k1;
  return;
}
