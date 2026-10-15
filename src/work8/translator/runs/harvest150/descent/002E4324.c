typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003F7C78(unsigned, unsigned, unsigned);
unsigned func_002E4324(unsigned a0, unsigned a1)
{
  unsigned k1, r0, r1, r4, r5, r6, t3, t8;
  unsigned t9;
  r0 = *(unsigned *)((char *)a0 + 0x2C);
  k1 = 0;
  if ((int)r0 > 0) {
    r6 = 0;
  }
  r1 = a1;
  r5 = a0;
  r4 = k1;
  if ((int)r0 > 0) {
    do {
      t3 = *(unsigned *)((char *)r5 + 0x2C);
      if (t3 > r4) {
        r1 = *(unsigned *)((char *)r5 + 0x30);
      }
      if (*(unsigned *)((char *)(t3 <= r4 ? *(unsigned *)((char *)r5 + 0x30) : (r1 + (r4 << 3))) + 4) != 0) {
        func_003F7C78(*(unsigned *)((char *)r5 + 0x10), 0, r4);
        t8 = *(unsigned *)((char *)r5 + 0x2C);
        t9 = r5 + 0x2C;
        r1 = t8;
        if (t8 > r4) {
          r1 = *(unsigned *)((char *)t9 + 4);
        }
        *(unsigned *)((char *)(t8 <= r4 ? *(unsigned *)((char *)t9 + 4) : (r1 + (r4 << 3))) + 4) = r6;
      }
      r0 = *(unsigned *)((char *)r5 + 0x2C);
      r4 = r4 + 1;
    } while ((int)r0 > (int)r4);
  }
  return r0;
}
