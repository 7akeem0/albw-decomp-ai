typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00115154(unsigned, unsigned, unsigned);
void func_004D8AEC(unsigned a0, unsigned a1, unsigned a2)
{
  float lv0;
  unsigned lv1;
  unsigned t1, t2, t3, t4;
  float x1, x2;
  func_00115154((unsigned)&lv0, (unsigned)&lv1, a1);
  t1 = *(unsigned *)((char *)a2);
  *(unsigned *)((char *)a0 + 0xC) = t1;
  t2 = *(unsigned *)((char *)a2 + 4);
  *(unsigned *)((char *)a0 + 0x1C) = t2;
  t3 = *(unsigned *)((char *)a2 + 8);
  *(unsigned *)((char *)a0 + 0x2C) = t3;
  *(float *)((char *)a0 + 4) = 0.0f;
  *(float *)((char *)a0 + 0x14) = 1.0f;
  *(float *)((char *)a0 + 0x24) = 0.0f;
  t4 = lv1;
  *(unsigned *)((char *)a0) = t4;
  *(float *)((char *)a0 + 0x10) = 0.0f;
  x1 = lv0;
  x2 = -x1;
  *(float *)((char *)a0 + 0x20) = x2;
  *(float *)((char *)a0 + 8) = x1;
  *(float *)((char *)a0 + 0x18) = 0.0f;
  *(unsigned *)((char *)a0 + 0x28) = t4;
  return;
}
