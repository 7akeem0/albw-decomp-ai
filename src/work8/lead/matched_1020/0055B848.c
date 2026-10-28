typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0055B848(unsigned a0, unsigned a1)
{
  unsigned r0, t2, t6, t11;
  t2 = *(short *)((char *)*(unsigned *)((char *)a0 + 0x2C) + 0x42);
  if (t2 == 166u) goto L4;
  if (t2 == 170u) goto L3;
  t11 = *(unsigned *)((char *)a0 + 0x30);
  *(unsigned *)((char *)a1) = *(unsigned *)((char *)t11);
  *(unsigned *)((char *)a1 + 4) = *(unsigned *)((char *)t11 + 4);
  r0 = *(unsigned *)((char *)t11 + 8);
  goto L5;
L3:;
  t6 = *(unsigned *)((char *)a0 + 0x30);
  *(unsigned *)((char *)a1) = *(unsigned *)((char *)t6);
  *(unsigned *)((char *)a1 + 4) = *(unsigned *)((char *)t6 + 4);
  *(unsigned *)((char *)a1 + 8) = *(unsigned *)((char *)t6 + 8);
  *(unsigned *)((char *)a1 + 4) = *(unsigned *)((char *)a0 + 0x17C);
  goto L6;
L4:;
  *(unsigned *)((char *)a1) = *(unsigned *)((char *)a0 + 0x180);
  *(unsigned *)((char *)a1 + 4) = *(unsigned *)((char *)a0 + 0x184);
  r0 = *(unsigned *)((char *)a0 + 0x188);
L5:;
  *(unsigned *)((char *)a1 + 8) = r0;
L6:;
  return 0;
}
