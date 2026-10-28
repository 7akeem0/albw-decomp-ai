typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003EA528(unsigned);
extern unsigned func_003EDB8C(unsigned, unsigned);
void func_003F4E30(unsigned a0, unsigned a1)
{
  unsigned r4, r5, t7;
  r4 = *(unsigned *)((char *)a1 + 0xDC);
  *(unsigned *)((char *)a1 + 0x29C) = 0;
  r5 = a1;
  if (r4 == 0) {
    return;
  }
  do {
    if ((int)*(unsigned *)((char *)r4 + 4) <= (int)*(unsigned *)((char *)r4)) {
      t7 = *(unsigned *)((char *)r4 + 0x140);
      func_003EA528(r4);
      r4 = t7;
    } else {
      func_003EDB8C(r5, r4);
      *(unsigned *)((char *)r5 + 0x29C) = *(unsigned *)((char *)r5 + 0x29C) + 1;
      r4 = *(unsigned *)((char *)r4 + 0x140);
    }
  } while (r4 != 0);
  return;
}
