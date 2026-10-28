typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0058A9D8(unsigned a0)
{
  unsigned r0, t6, t7;
  if (*(unsigned char *)((char *)a0 + 0x4B5) == 0) goto L4;
  r0 = *(unsigned *)((char *)a0 + 0x434);
  if (r0 == 0) goto L5;
L2:;
  t6 = (*(unsigned short *)((char *)r0 + 0x28) & 0x7E0) >> 5;
  t7 = t6;
  if (t6 != 0) {
    t7 = 0;
  }
  if (t6 == 0) goto L5;
  return t7;
L4:;
  r0 = *(unsigned *)((char *)a0 + 0x430);
  if (r0 != 0) goto L2;
L5:;
  return 1;
}
