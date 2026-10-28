typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DE7F0[];
extern char data_00725974[];
extern unsigned func_00502768(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_002E1BB4(unsigned, unsigned);
unsigned func_002FDFE8(unsigned a0)
{
  unsigned t1, t2, t3;
  t1 = func_00502768(a0, (unsigned)data_00725974, 7, 0);
  *(unsigned *)((char *)t1) = (unsigned)ro_006DE7F0;
  t1 = t1 + 0x30;
  t2 = func_002E1BB4(t1, 0);
  t3 = t2 + (-48);
  *(unsigned *)((char *)t3 + 0x44) = 0;
  *(unsigned *)((char *)t3 + 0x48) = 0;
  *(unsigned *)((char *)t3 + 0x4C) = 0;
  *(unsigned *)((char *)t3 + 0x50) = 0;
  *(unsigned *)((char *)t3 + 0x54) = 0;
  *(unsigned *)((char *)t3 + 0x58) = 0;
  *(unsigned *)((char *)t3 + 0x5C) = 0;
  *(unsigned *)((char *)t3 + 0x60) = 0;
  *(unsigned *)((char *)t3 + 0x64) = 0;
  *(unsigned *)((char *)t3 + 0x68) = 0;
  *(unsigned *)((char *)(t3 + 0x6C)) = 0;
  *(unsigned *)((char *)(t3 + 0x6C) + 4) = (-1);
  *(unsigned *)((char *)t3 + 0x78) = 0;
  *(unsigned *)((char *)t3 + 0x74) = (-1);
  *(unsigned char *)((char *)t3 + 0x7C) = 0;
  *(unsigned char *)((char *)t3 + 0x7D) = 0;
  *(unsigned char *)((char *)t3 + 0x7E) = 0;
  *(unsigned char *)((char *)t3 + 0x7F) = 0;
  *(unsigned char *)((char *)t3 + 0x80) = 0;
  *(unsigned char *)((char *)t3 + 0x10) = 1;
  *(unsigned char *)((char *)t3 + 0x12) = 1;
  return t3;
}
