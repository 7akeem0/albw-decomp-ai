typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00368BB4(unsigned a0, unsigned a1)
{
  unsigned r0, r1, r2, r3, t9, t10, t11, t12;
  unsigned t13;
  if (a1 == 0) goto L4;
  r3 = *(unsigned *)((char *)a0 + 0xA4);
  r0 = *(unsigned *)((char *)a0 + 0xA8);
  r1 = a1;
  r2 = 0;
  if (r3 == 0) goto L4;
L2:;
  if (*(unsigned char *)((char *)(r0 + ((r2 + (r2 << 3)) + (r2 << 5) << 3)) + 0x144) == 2) goto L5;
  r2 = r2 + 1;
  if (r2 != r3) goto L2;
L4:;
  return 0;
L5:;
  t9 = r0 + ((r2 + (r2 << 3)) + (r2 << 5) << 3);
  t10 = *(signed char *)((char *)t9 + 0x142);
  t11 = t10;
  if ((t10 + 1) == 0) {
    t11 = 0x20;
  }
  r0 = t11;
  if ((t10 + 1) == 0) goto L7;
  t12 = t9 + 0x120;
  t13 = (t11 < 32u) ? t12 + t11 : t12;
  r0 = *(unsigned char *)((char *)t13);
L7:;
  *(unsigned char *)((char *)r1) = r0;
  return 1;
}
