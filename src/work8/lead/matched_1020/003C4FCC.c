typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_003C4FCC(unsigned a0)
{
  unsigned t1, t4;
  t1 = *(signed char *)((char *)a0 + 0x70);
  if ((t1 == 5) || (t1 == 3)) {
    return;
  }
  if (t1 == 4) {
    return;
  }
  if (*(unsigned *)((char *)a0 + 0x6C) < 10u) {
    return;
  }
  t4 = *(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x138);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t4)(a0, 5, 1, t4);
  return;
}
