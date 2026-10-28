typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004ECEB0(unsigned);
unsigned func_0014DDEC(unsigned a0)
{
  unsigned t3, t4, t5, t10, ka4, ka7;
  t3 = ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x34))(a0);
  t4 = func_004ECEB0(a0);
  t5 = a0 + 0x300;
  if (t4 == 0) goto L3;
  if (t3 == 0) goto L5;
  *(unsigned *)((char *)a0 + 0x368) = *(unsigned *)((char *)a0 + 0x3D0);
  *(unsigned *)((char *)a0 + 0x36C) = *(unsigned *)((char *)a0 + 0x3D4);
  ka4 = a0 + 0x370;
  *(unsigned *)((char *)ka4) = *(unsigned *)((char *)a0 + 0x3D8);
  return 1;
L3:;
  if (*(unsigned char *)((char *)t5 + 0xCC) == 0) goto L7;
L4:;
  *(unsigned *)((char *)a0 + 0x368) = *(unsigned *)((char *)a0 + 0x3D0);
  *(unsigned *)((char *)a0 + 0x36C) = *(unsigned *)((char *)a0 + 0x3D4);
  ka7 = a0 + 0x370;
  *(unsigned *)((char *)ka7) = *(unsigned *)((char *)a0 + 0x3D8);
  goto L7;
L5:;
  if (*(unsigned char *)((char *)t5 + 0x91) == 0) goto L7;
  t10 = ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x38))(a0);
  if (t10 != 0) goto L4;
L7:;
  return 0;
}
