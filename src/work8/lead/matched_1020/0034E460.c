typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_0034E460(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned t1, ka7;
  t1 = a0 + 0x200;
  if ((int)a1 >= 0) goto L2;
  *(unsigned short *)((char *)t1 + 0x9E) = (-1);
  *(unsigned char *)((char *)a0 + 0x2B8) = 0;
  *(float *)((char *)a0 + 0x2C8) = 0.0f;
  return;
L2:;
  *(unsigned short *)((char *)t1 + 0x9E) = a1;
  *(unsigned *)((char *)a0 + 0x2A4) = *(unsigned *)((char *)a2);
  *(unsigned *)((char *)a0 + 0x2A8) = *(unsigned *)((char *)a2 + 4);
  ka7 = a0 + 0x2AC;
  *(unsigned *)((char *)ka7) = *(unsigned *)((char *)a2 + 8);
  *(unsigned char *)((char *)a0 + 0x2A0) = a3;
  return;
}
