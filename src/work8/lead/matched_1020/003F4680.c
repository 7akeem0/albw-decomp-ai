typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003EA528(unsigned);
extern unsigned func_003ED794(unsigned, unsigned);
void func_003F4680(unsigned a0, unsigned a1)
{
  unsigned r4, t3, t4, t5, t11, t18;
  *(unsigned *)((char *)a1 + 0x29C) = 0;
  t3 = *(unsigned *)((char *)*(unsigned *)((char *)a1 + 0xD8) + 4);
  t4 = *(unsigned *)((char *)a1 + 0xDC);
  t5 = 0;
  if ((t3 & 0x400) != 0) {
    t4 = *(unsigned *)((char *)a1 + 0xE4);
  }
  if ((t3 & 0x400) != 0) {
    t5 = 1;
  }
  if (t4 == 0) {
    return;
  }
  r4 = t4;
  if (t5 == 0) {
    do {
      if ((int)*(unsigned *)((char *)r4) >= (int)*(unsigned *)((char *)r4 + 4)) {
        t18 = *(unsigned *)((char *)r4 + 0x140);
        func_003EA528(r4);
        r4 = t18;
      } else {
        func_003ED794((a1), r4);
        *(unsigned *)((char *)(a1) + 0x29C) = *(unsigned *)((char *)(a1) + 0x29C) + 1;
        r4 = *(unsigned *)((char *)r4 + 0x140);
      }
    } while (r4 != 0);
    return;
  }
  do {
    if ((int)*(unsigned *)((char *)r4 + 4) <= (int)*(unsigned *)((char *)r4)) {
      t11 = *(unsigned *)((char *)r4 + 0x13C);
      func_003EA528(r4);
      r4 = t11;
    } else {
      func_003ED794((a1), r4);
      *(unsigned *)((char *)(a1) + 0x29C) = *(unsigned *)((char *)(a1) + 0x29C) + 1;
      r4 = *(unsigned *)((char *)r4 + 0x13C);
    }
  } while (r4 != 0);
  return;
}
