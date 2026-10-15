typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0055DCC4(unsigned a0, unsigned a1)
{
  unsigned t1;
  t1 = a0 + 0x800;
  if (a1 != 8) {
    if (a1 == 4) goto L8;
    goto L13;
  }
  if (*(unsigned char *)((char *)a0 + 0x8C0) == 8) {
    if ((int)*(signed char *)((char *)t1 + 0xC2) >= 2) goto L12;
  }
  if (*(unsigned char *)((char *)a0 + 0x8C1) != 8) goto L13;
  if ((int)*(signed char *)((char *)t1 + 0xC3) < 2) goto L13;
  goto L12;
  L8:;
  if (*(unsigned char *)((char *)a0 + 0x8C0) == 4) {
    if ((int)*(signed char *)((char *)t1 + 0xC2) >= 2) goto L12;
  }
  if (*(unsigned char *)((char *)a0 + 0x8C1) != 4) goto L13;
  if ((int)*(signed char *)((char *)t1 + 0xC3) < 2) goto L13;
  L12:;
  return 1;
  L13:;
  return 0;
}
