typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00115154(unsigned, unsigned, unsigned);
float func_004D80A4(unsigned a0, unsigned a1, float fa0)
{
  float lv0;
  float lv1;
  unsigned h901;
  float x3, x4;
  func_00115154((unsigned)&lv0, (unsigned)&lv1, a1);
  x3 = (lv0) * fa0;
  x4 = (lv1) * fa0;
  *(float *)((char *)a0) = x3;
  h901 = a0 + 8;
  *(float *)((char *)h901) = x4;
  return x3;
}
