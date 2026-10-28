typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_00115544(unsigned a0, unsigned a1, float fa0, float fa1, float fa2, float fa3, float fa4, float fa5, float fa6, float fa7, float fa8)
{
  float x1, x2, x3, x4, x5, x6, x7, x8;
  float x9;
  x1 = *(float *)((char *)a1);
  x2 = *(float *)((char *)a1 + 4);
  x3 = *(float *)((char *)a1 + 8);
  x4 = *(float *)((char *)a1 + 0xC);
  x5 = *(float *)((char *)a1 + 0x10);
  x6 = *(float *)((char *)a1 + 0x14);
  x7 = *(float *)((char *)a1 + 0x18);
  x8 = *(float *)((char *)a1 + 0x1C);
  x9 = *(float *)((char *)a1 + 0x20);
  *(float *)((char *)a0) = x1;
  *(float *)((char *)a0 + 0xC) = x2;
  *(float *)((char *)a0 + 0x18) = x3;
  *(float *)((char *)a0 + 4) = x4;
  *(float *)((char *)a0 + 0x10) = x5;
  *(float *)((char *)a0 + 0x1C) = x6;
  *(float *)((char *)a0 + 8) = x7;
  *(float *)((char *)a0 + 0x14) = x8;
  *(float *)((char *)a0 + 0x20) = x9;
  return;
}
