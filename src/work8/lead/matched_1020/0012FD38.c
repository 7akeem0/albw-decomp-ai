typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_001151EC(unsigned, unsigned);
void func_0012FD38(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t7, t8, ka12;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  unsigned t17;
  t1 = a0 + 0x2000;
  t2 = t1 + 0x8D0;
  t3 = *(unsigned *)((char *)t2);
  t4 = a1 + 4;
  t5 = t3 + 0x10;
  func_001151EC((t3 + 0x14), t4);
  t7 = *(unsigned *)((char *)a1 + 0x34);
  *(unsigned *)((char *)t5 + 0x34) = t7;
  t8 = *(unsigned *)((char *)a1 + 0x38);
  *(unsigned *)((char *)t5 + 0x38) = t8;
  t9 = *(unsigned *)((char *)a1 + 0x3C);
  *(unsigned *)((char *)t5 + 0x3C) = t9;
  t10 = *(unsigned *)((char *)a1 + 0x40);
  *(unsigned *)((char *)t5 + 0x40) = t10;
  t11 = *(unsigned *)((char *)a1 + 0x44);
  *(unsigned *)((char *)t5 + 0x44) = t11;
  t12 = *(unsigned *)((char *)a1 + 0x48);
  ka12 = t5 + 0x48;
  *(unsigned *)((char *)ka12) = t12;
  t13 = *(unsigned *)((char *)a1 + 0x4C);
  *(unsigned *)((char *)t5 + 0x4C) = t13;
  t14 = *(unsigned *)((char *)a1 + 0x50);
  *(unsigned *)((char *)t5 + 0x50) = t14;
  t15 = *(unsigned *)((char *)a1 + 0x54);
  *(unsigned *)((char *)t5 + 0x54) = t15;
  t16 = *(unsigned *)((char *)t3 + 0x2C8);
  t17 = t16 & (-2);
  *(unsigned *)((char *)t3 + 0x2C8) = t17;
  return;
}
