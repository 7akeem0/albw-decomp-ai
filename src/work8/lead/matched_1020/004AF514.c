typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004D8AEC(unsigned, unsigned, unsigned);
extern unsigned func_004CEAF0(unsigned, unsigned);
extern unsigned func_004356B4(unsigned, unsigned, unsigned);
extern void func_001512B4(unsigned, unsigned);
void func_004AF514(unsigned a0)
{
  unsigned h901, t2, t3, t9, t10, t12, t14, t15;
  unsigned t16, t18, t19;
  float x3, x4, x5, x6, x7;
  t2 = *(unsigned *)((char *)a0 + 0x4F4);
  t3 = (a0 + 0x400) + 0xF4;
  *(unsigned *)((char *)t2 + 0x164) = *(unsigned *)((char *)t2 + 0x164) | 0x40000000;
  func_004D8AEC(t2 + 0x80, *(unsigned *)((char *)a0 + 0x3E8), a0 + 0x3D0);
  t9 = a0 + 0x400;
  t10 = *(unsigned *)((char *)t3);
  x3 = (*(float *)((char *)t9 + 0x19C)) * (*(float *)((char *)t9 + 0x178));
  t12 = *(unsigned *)((char *)t10 + 0x164) | 0x40000000;
  *(unsigned *)((char *)t10 + 0x164) = t12;
  *(float *)((char *)t10 + 0x74) = x3;
  *(float *)((char *)t10 + 0x78) = x3;
  *(float *)((char *)t10 + 0x7C) = x3;
  func_004CEAF0(*(unsigned *)((char *)t3), t12);
  h901 = a0 + 0x3D4;
  x4 = *(float *)((char *)h901);
  x5 = *(float *)((char *)t9 + 0x184);
  t14 = *(unsigned *)((char *)a0 + 0x500);
  t15 = *(unsigned *)((char *)a0 + 0x3D0);
  t16 = *(unsigned *)((char *)a0 + 0x3D8);
  x6 = x4;
  if (x4 > x5) {
    x6 = x5;
  }
  t14 = t14 + 4;
  x7 = *(float *)((char *)t9 + 0x17C);
  *(unsigned *)((char *)t14) = t15;
  *(float *)((char *)t14 + 4) = x6 + x7;
  *(unsigned *)((char *)t14 + 8) = t16;
  func_004356B4(*(unsigned *)((char *)a0 + 0x500), t15, t16);
  t18 = *(unsigned *)((char *)a0 + 0x568);
  t19 = a0 + 0x4D0;
  func_001512B4(t18, t19);
  return;
}
