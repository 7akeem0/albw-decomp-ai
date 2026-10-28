typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003EF02C(void);
void func_003EE6E4(unsigned a0)
{
  unsigned t1;
  float x1, x2, x3, x4, x5, x6;
  func_003EF02C();
  t1 = *(unsigned *)((char *)a0 + 0x144);
  x1 = *(float *)((char *)t1 + 0x60);
  x2 = *(float *)((char *)t1 + 0x70);
  x3 = *(float *)((char *)t1 + 0x80);
  x4 = *(float *)((char *)t1 + 0x30);
  x5 = *(float *)((char *)t1 + 0x40);
  x6 = *(float *)((char *)t1 + 0x50);
  *(float *)((char *)a0 + 0x10C) = x1;
  *(float *)((char *)a0 + 0x11C) = x2;
  *(float *)((char *)a0 + 0x12C) = x3;
  *(float *)((char *)a0 + 0xDC) = x4;
  *(float *)((char *)a0 + 0xEC) = x5;
  *(float *)((char *)a0 + 0xFC) = x6;
  return;
}
