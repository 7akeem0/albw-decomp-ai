typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00115154(unsigned, unsigned, unsigned);
unsigned func_0048B5D4(unsigned a0, unsigned a1, unsigned a2)
{
  float lv0;
  unsigned lv1;
  unsigned t2;
  float x4, x5, x6, x7;
  func_00115154((unsigned)&lv0, (unsigned)&lv1, a2 >> 1);
  x4 = lv0;
  t2 = lv1;
  x5 = (*(float *)((char *)a1)) * x4;
  x6 = (*(float *)((char *)a1 + 4)) * x4;
  x7 = (*(float *)((char *)a1 + 8)) * x4;
  *(unsigned *)((char *)a0 + 0xC) = t2;
  *(float *)((char *)a0 + 8) = x7;
  *(float *)((char *)a0) = x5;
  *(float *)((char *)a0 + 4) = x6;
  return t2;
}
