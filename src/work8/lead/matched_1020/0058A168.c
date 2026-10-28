typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0058A168(unsigned a0)
{
  unsigned r0, r1, t2, t6, t9, t12;
  if (*(unsigned char *)((char *)a0 + 0x4B5) == 0) goto L6;
  r1 = *(unsigned *)((char *)a0 + 0x434);
  if (r1 == 0) goto L3;
L2:;
  t6 = (*(unsigned short *)((char *)r1 + 0x28) & 0x7E0) >> 5;
  if (((t6 == 5) || (t6 == 7)) || (t6 == 9)) goto L10;
L3:;
  if ((*(unsigned *)((char *)a0 + 0x59C) & 1) == 0) goto L10;
  t9 = a0 + 0x800;
  if (*(unsigned char *)((char *)a0 + 0x848) == 0) goto L8;
  goto L10;
L6:;
  t2 = *(unsigned *)((char *)a0 + 0x430);
  if (t2 == 0) goto L3;
  r1 = t2;
  goto L2;
L8:;
  if ((int)*(short *)((char *)(a0 + 0x500) + 8) <= 0) goto L10;
  t12 = *(unsigned char *)((char *)t9 + 0x96);
  r0 = (t12 != 0);
  if (t12 != 0) goto L11;
L10:;
  r0 = 0;
L11:;
  return r0;
}
