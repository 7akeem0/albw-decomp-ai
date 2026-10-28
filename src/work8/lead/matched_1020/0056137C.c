typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003C8ACC(unsigned, unsigned);
unsigned func_0056137C(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned t1, t2, t3, t4, t5, t6, t7;
  t1 = *(unsigned *)((char *)a0);
  t2 = t1 & (-2);
  t3 = func_003C8ACC((unsigned)&lv[0], t2);
  t4 = t3 & (-2147483647-1);
  if ((int)t4 >= 0) {
    t5 = *(unsigned *)((char *)&lv[0]);
    t6 = *(unsigned *)((char *)&lv[1]);
    t7 = a0 + 0xC;
    *(unsigned *)((char *)t7) = t5;
    *(unsigned *)((char *)t7 + 4) = t6;
    *(unsigned *)((char *)a1) = t5;
    *(unsigned *)((char *)a1 + 4) = t6;
  } else {
    *(unsigned *)((char *)a0 + 0xC) = 0;
    *(unsigned *)((char *)a0 + 0x10) = 0;
  }
  return t3;
}
