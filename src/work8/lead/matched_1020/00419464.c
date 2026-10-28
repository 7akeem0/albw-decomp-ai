typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F0788[];
extern unsigned func_004195B4(void);
extern unsigned func_0040FA80(unsigned, unsigned, unsigned, unsigned);
unsigned func_00419464(void)
{
  unsigned k1, t1, t2, t3, t4, t6, kt3;
  t1 = func_004195B4();
  t2 = t1 + 0x44;
  k1 = 0;
  *(unsigned *)((char *)t2 + 4) = k1;
  *(unsigned *)((char *)t2 + 8) = k1;
  t3 = (unsigned)ro_006F0788 + 0x30;
  *(unsigned *)((char *)t1 + 0x54) = k1;
  t4 = (unsigned)ro_006F0788 + 0x44;
  *(unsigned *)((char *)t1 + 0x58) = k1;
  *(unsigned *)((char *)t1 + 0x44) = t3;
  *(unsigned *)((char *)t1 + 0x50) = t4;
  *(unsigned *)((char *)t1) = (unsigned)ro_006F0788;
  kt3 = (unsigned)ro_006F0788;
  func_0040FA80(t1 + 0x78, t3, t4, kt3);
  *(unsigned char *)((char *)t1 + 0x8C) = k1;
  *(unsigned char *)((char *)t1 + 0x8D) = k1;
  *(unsigned char *)((char *)t1 + 0x8E) = k1;
  *(unsigned char *)((char *)t1 + 0x8F) = k1;
  *(unsigned char *)((char *)t1 + 0x90) = k1;
  *(unsigned char *)((char *)t1 + 0xA1) = k1;
  *(unsigned char *)((char *)t1 + 0xA2) = k1;
  *(unsigned *)((char *)t1 + 0xA4) = k1;
  *(unsigned *)((char *)t1 + 0xA8) = k1;
  *(unsigned *)((char *)t1 + 0xAC) = k1;
  t6 = t1 + 0xB8;
  *(unsigned *)((char *)t1 + 0xB0) = k1;
  *(unsigned *)((char *)t1 + 0xB4) = k1;
  *(unsigned *)((char *)t6) = (-1);
  *(unsigned *)((char *)t6 + 4) = k1;
  *(unsigned *)((char *)t1 + 0xC0) = k1;
  return t1;
}
