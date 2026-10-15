typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00520B48(unsigned a0)
{
  unsigned r0, r1, t5;
  r0 = a0;
  r1 = 0;
L1:;
  if (*(unsigned char *)((char *)*(unsigned *)((char *)(r0 + (r1 << 2)) + 0x10) + 0x1E9) != 0) goto L4;
  r1 = r1 + 1;
  if (r1 < 15u) goto L1;
  t5 = *(unsigned *)((char *)r0 + 0x54);
  r0 = t5;
  if ((int)t5 <= 0) {
    r0 = 0;
  }
  if ((int)t5 <= 0) goto L5;
L4:;
  r0 = 1;
L5:;
  return r0;
}
