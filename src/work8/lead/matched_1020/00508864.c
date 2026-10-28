typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_00508864(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5;
  t1 = a0 + 0x400;
  t2 = t1 + 0x7C;
  *(unsigned *)((char *)a0 + 0x480) = 0xA;
  *(float *)((char *)t2 + 8) = 0.10000000149011612f;
  *(unsigned *)((char *)a0 + 0x47C) = 0;
  t3 = *(unsigned *)((char *)a0 + 0x410);
  t4 = *(unsigned *)((char *)t3 + 0x158);
  *(unsigned *)((char *)a0 + 0x46C) = t4;
  t5 = *(unsigned *)((char *)a0 + 0x424);
  *(unsigned char *)((char *)t5 + 0x61) = 0;
  return;
}
