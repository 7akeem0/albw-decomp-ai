typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00435C2C(unsigned, unsigned, unsigned);
unsigned func_0043422C(unsigned a0)
{
  unsigned t1, t2, t7, t11;
  float x3, x4, x5;
  t1 = *(unsigned *)((char *)a0 + 0x58);
  *(unsigned *)((char *)a0 + 0x34) = *(unsigned *)((char *)t1 + 0xD0);
  *(unsigned *)((char *)a0 + 0x38) = *(unsigned *)((char *)t1 + 0xD4);
  *(unsigned *)((char *)a0 + 0x3C) = *(unsigned *)((char *)t1 + 0xD8);
  *(unsigned *)((char *)a0 + 0x40) = *(unsigned *)((char *)t1 + 0xDC);
  t7 = *(unsigned *)((char *)t1 + 0xE0);
  *(unsigned *)((char *)a0 + 0x44) = t7;
  *(unsigned *)((char *)a0 + 0x48) = *(unsigned *)((char *)t1 + 0xE4);
  t2 = a0 + 0x34;
  func_00435C2C(((a0 + 0x400) + 0xA4), t2, t7);
  t11 = a0 + 4;
  x3 = *(float *)((char *)t11);
  x4 = *(float *)((char *)t11 + 4);
  x5 = *(float *)((char *)t11 + 8);
  *(float *)((char *)a0 + 0x34) = (*(float *)((char *)a0 + 0x34)) + x3;
  *(float *)((char *)a0 + 0x38) = (*(float *)((char *)a0 + 0x38)) + x4;
  *(float *)((char *)a0 + 0x3C) = (*(float *)((char *)a0 + 0x3C)) + x5;
  *(float *)((char *)a0 + 0x40) = (*(float *)((char *)a0 + 0x40)) + x3;
  *(float *)((char *)a0 + 0x44) = (*(float *)((char *)a0 + 0x44)) + x4;
  *(float *)((char *)a0 + 0x48) = (*(float *)((char *)a0 + 0x48)) + x5;
  return t11;
}
