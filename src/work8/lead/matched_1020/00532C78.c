typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00532C78(unsigned a0)
{
  unsigned t1, t2, t3, t4, t7, t8;
  t1 = *(unsigned *)((char *)a0 + 8);
  if (t1 == 0) goto L3;
  t2 = *(short *)((char *)a0 + 2);
  if ((int)t2 < 0) goto L3;
  t3 = *(unsigned *)((char *)t1 + 8);
  t4 = t1;
  if (t3 > t2) {
    t4 = *(unsigned *)((char *)t1 + 0xC);
  }
  t7 = *(unsigned char *)((char *)(t3 > t2 ? (t4 + (((t2 << 3) - t2) << 3)) : *(unsigned *)((char *)t4 + 0xC)) + 0x35);
  t8 = t7;
  if (t7 != 0) {
    t8 = 1;
  }
  return t8;
L3:;
  return 0;
}
