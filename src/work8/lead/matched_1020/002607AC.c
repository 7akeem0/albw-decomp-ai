typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0034C57C(unsigned, unsigned);
extern unsigned func_00260700(unsigned, unsigned);
void func_002607AC(unsigned a0, unsigned a1)
{
  unsigned k1, k2, t1, t2, t3, t4, t5, t6, ka4;
  unsigned t7, t8, t9, t10, t11, t12, t13, t14;
  t1 = *(unsigned *)((char *)a0 + 0x30);
  t2 = *(unsigned *)((char *)a0 + 0x34);
  func_0034C57C(t1, t2);
  k1 = 0;
  *(unsigned char *)((char *)a0 + 0x38) = k1;
  t3 = *(unsigned *)((char *)a0);
  ka4 = a0 + 8;
  t4 = *(unsigned *)((char *)ka4);
  t5 = a0 + 0x38;
  t6 = *(unsigned *)((char *)t3 + 0xC);
  t7 = ((unsigned (*)(unsigned))t6)(a0);
  t8 = *(unsigned *)((char *)a0 + 0x34);
  k2 = 1;
  t9 = (int)t7 > (int)t8 ? 1 : 0;
  t10 = *(unsigned char *)((char *)t5);
  t11 = k2 << t4;
  t12 = t11 & 0xFF;
  t13 = t12;
  if (t9 != 0) {
    t13 = t12 | t10;
  }
  t14 = t13;
  if (t9 == 0) {
    t14 = t10 & (~t13);
  }
  *(unsigned char *)((char *)t5) = t14;
  func_00260700(a0, t10);
  *(unsigned *)((char *)a0 + 0xC) = k2;
  *(unsigned char *)((char *)a0 + 0x44) = k1;
  return;
}
