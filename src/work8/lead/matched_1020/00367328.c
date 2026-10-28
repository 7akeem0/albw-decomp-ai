typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00367328(unsigned a0)
{
  unsigned t2, t3, t4, t7, t13;
  float x1, x5;
  if (*(unsigned char *)((char *)a0 + 0x16) != 0) goto L8;
  t2 = *(unsigned short *)((char *)a0 + 0x10);
  if (t2 == 0) goto L4;
  t13 = ((t2 + (-1)) << 0x10) >> 0x10;
  x5 = *(float *)((char *)a0 + 0x18);
  *(unsigned short *)((char *)a0 + 0x10) = t13;
  *(float *)((char *)a0 + 0x2C) = 1.0f - (((float)t13) * x5);
  if (t13 != 0) goto L8;
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0xC))(a0);
  goto L8;
L4:;
  t3 = *(unsigned short *)((char *)a0 + 0x12);
  if (t3 == 0) goto L6;
  *(float *)((char *)a0 + 0x2C) = 1.0f;
  *(unsigned short *)((char *)a0 + 0x12) = t3 + (-1);
  goto L8;
L6:;
  t4 = *(unsigned short *)((char *)a0 + 0x14);
  if (t4 == 0) goto L8;
  t7 = ((t4 + (-1)) << 0x10) >> 0x10;
  x1 = *(float *)((char *)a0 + 0x1C);
  *(unsigned short *)((char *)a0 + 0x14) = t7;
  *(float *)((char *)a0 + 0x2C) = ((float)t7) * x1;
  if (t7 == 0) goto L9;
L8:;
  return 0;
L9:;
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x10))(a0);
  return 1;
}
