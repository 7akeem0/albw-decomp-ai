typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0055DDB4(unsigned a0, unsigned a1)
{
  unsigned t1;
  if (((a1 == 2) || (a1 == 3)) || (a1 == 9)) goto L13;
  t1 = a0 + 0x800;
  if (a1 == 5) goto L4;
  if (a1 == 6) goto L9;
  goto L14;
L4:;
  if (*(unsigned char *)((char *)a0 + 0x8C0) != 5) goto L6;
  if ((int)*(signed char *)((char *)t1 + 0xC2) >= 2) goto L13;
L6:;
  if (*(unsigned char *)((char *)a0 + 0x8C1) != 5) goto L14;
  if ((int)*(signed char *)((char *)t1 + 0xC3) < 2) goto L14;
  goto L13;
L9:;
  if (*(unsigned char *)((char *)a0 + 0x8C0) != 6) goto L11;
  if ((int)*(signed char *)((char *)t1 + 0xC2) >= 2) goto L13;
L11:;
  if (*(unsigned char *)((char *)a0 + 0x8C1) != 6) goto L14;
  if ((int)*(signed char *)((char *)t1 + 0xC3) < 2) goto L14;
L13:;
  return 1;
L14:;
  return 0;
}
