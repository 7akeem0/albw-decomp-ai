typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_005467C0(void);
unsigned func_0055E648(unsigned a0, unsigned a1)
{
  unsigned h901, h902, t4, t5, t6, t9, t10;
  switch (*(short *)((char *)*(unsigned *)((char *)a0 + 0x2C) + 0x42) + (-88)) {
  case 0: goto L3;
  case 1: goto L5;
  case 2: goto L5;
  case 3: goto L5;
  case 4: goto L2;
  case 5: goto L2;
  case 6: goto L2;
  default: goto L1;
  }
  L1:;
  goto L5;
  L2:;
  t4 = *(unsigned *)((char *)a0 + 0x30);
  t6 = *(unsigned *)((char *)t4 + 4);
  t5 = *(unsigned *)((char *)t4);
  h901 = *(unsigned *)((char *)t4 + 8);
  *(unsigned *)((char *)a1 + 8) = h901;
  *(unsigned *)((char *)a1) = t5;
  *(unsigned *)((char *)a1 + 4) = t6;
  return 2;
  L3:;
  if (*(unsigned char *)((char *)a0 + 0xE4) != 0) {
    t10 = *(unsigned *)((char *)a0 + 0x74);
    t9 = *(unsigned *)((char *)a0 + 0x70);
    h902 = *(unsigned *)((char *)a0 + 0x78);
    *(unsigned *)((char *)a1 + 8) = h902;
    *(unsigned *)((char *)a1) = t9;
    *(unsigned *)((char *)a1 + 4) = t10;
    return 3;
  }
  L5:;
  return func_005467C0();
}
