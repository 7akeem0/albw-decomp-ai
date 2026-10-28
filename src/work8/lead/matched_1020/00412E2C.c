typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0067629C(unsigned, unsigned);
void func_00412E2C(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned lv[1];
  unsigned k1, r0, r4, r5, t2, t5, t6, t7;
  unsigned t8;
  k1 = 0;
  r4 = a0;
  r5 = k1;
L1:;
  t2 = func_0067629C(r4 + 0xB4, (unsigned)&lv[0]);
  if (t2 == 0) goto L5;
  r0 = *(unsigned *)((char *)&lv[0]);
  *(unsigned *)((char *)r4 + 0x178) = *(unsigned *)((char *)r0 + 8);
  if (r0 == 0) goto L1;
L3:;
  t5 = *(unsigned *)((char *)r0);
  t6 = r0;
  if (t5 != 0) {
    t6 = t5;
  }
  r0 = t6;
  if (t5 != 0) goto L3;
  t7 = *(unsigned *)((char *)t6 + 0xC);
  *(unsigned *)((char *)r4 + 0x188) = t7;
  *(unsigned char *)((char *)r4 + 0x18C) = r5;
  t8 = *(unsigned *)((char *)r4 + 0x184);
  if (t8 == t7) {
    *(unsigned *)((char *)r4 + 0x188) = r5;
    *(unsigned *)((char *)r4 + 0x184) = r5;
  }
  goto L1;
L5:;
  return;
}
