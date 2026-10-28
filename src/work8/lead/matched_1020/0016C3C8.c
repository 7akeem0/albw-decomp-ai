typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0016C0FC(unsigned, unsigned, unsigned, unsigned);
void func_0016C3C8(unsigned a0, unsigned a1)
{
  unsigned lv[8];
  unsigned t3, t4, t5, t9, t10, t12, t13;
  unsigned t14;
  t3 = *(unsigned *)((char *)(a1 + 0x22C) + 4);
  t4 = *(unsigned *)((char *)(a1 + 0x22C) + 8);
  t5 = *(unsigned *)((char *)(a1 + 0x22C) + 0xC);
  *(unsigned *)((char *)&lv[4]) = *(unsigned *)((char *)(a1 + 0x22C));
  *(unsigned *)((char *)&lv[5]) = t3;
  *(unsigned *)((char *)&lv[6]) = t4;
  *(unsigned *)((char *)&lv[7]) = t5;
  *(unsigned *)((char *)&lv[0]) = *(unsigned *)((char *)a1 + 0x1A8);
  *(unsigned *)((char *)&lv[1]) = *(unsigned *)((char *)a1 + 0x1B8);
  *(unsigned *)((char *)&lv[2]) = *(unsigned *)((char *)a1 + 0x1C8);
  t9 = func_0016C0FC(a0, (unsigned)&lv[4], (unsigned)&lv[0], a1);
  if (t9 == 0) {
    return;
  }
  t10 = a1 + 0x22C;
  t12 = *(unsigned *)((char *)&lv[5]);
  t13 = *(unsigned *)((char *)&lv[6]);
  t14 = *(unsigned *)((char *)&lv[7]);
  *(unsigned *)((char *)t10) = *(unsigned *)((char *)&lv[4]);
  *(unsigned *)((char *)t10 + 4) = t12;
  *(unsigned *)((char *)t10 + 8) = t13;
  *(unsigned *)((char *)t10 + 0xC) = t14;
  return;
}
