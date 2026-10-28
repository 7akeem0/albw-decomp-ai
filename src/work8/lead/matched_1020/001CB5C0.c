typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00712468[];
unsigned func_001CB5C0(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r0, t3;
  if (a3 != 0) {
    if (a3 != 1) goto L9;
  } else {
    t3 = *(unsigned *)((char *)(*(unsigned *)((char *)data_00712468) + 0x1000) + 0x130);
    if (*(unsigned char *)((char *)t3 + 0xB0) == 0) goto L9;
    if (*(unsigned short *)((char *)t3 + 0xB2) == 0) goto L9;
    goto L7;
  }
  r0 = *(unsigned short *)((char *)a0 + 0x2C);
  if (r0 == 1) goto L8;
  L7:;
  r0 = 0;
  L8:;
  return r0;
  L9:;
  return 1;
}
