typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0040FAB0(void);
extern char ro_006F074C[];
extern unsigned func_00100118(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_00417B04(unsigned);
unsigned func_00417C84(unsigned a0)
{
  unsigned h901, k1, t1, t3, t4;
  k1 = 0;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F074C;
  *(unsigned char *)((char *)a0 + 5) = k1;
  a0 = a0 + 0x8C;
  *(unsigned char *)((char *)a0) = k1;
  *(unsigned char *)((char *)a0 + 1) = k1;
  *(unsigned short *)((char *)a0 + 2) = k1;
  *(unsigned short *)((char *)a0 + 4) = k1;
  h901 = a0;
  t1 = h901 + (-112);
  *(unsigned char *)((char *)t1 + 0x76) = k1;
  *(unsigned char *)((char *)t1 + 0x77) = k1;
  *(unsigned short *)((char *)t1 + 0x78) = k1;
  *(unsigned short *)((char *)t1 + 0x7A) = k1;
  *(unsigned char *)((char *)t1 + 0x7C) = k1;
  *(unsigned char *)((char *)t1 + 0x7D) = k1;
  *(unsigned short *)((char *)t1 + 0x7E) = k1;
  *(unsigned short *)((char *)t1 + 0x80) = k1;
  *(unsigned char *)((char *)t1 + 0x82) = k1;
  *(unsigned char *)((char *)t1 + 0x83) = k1;
  *(unsigned short *)((char *)t1 + 0x84) = k1;
  *(unsigned short *)((char *)t1 + 0x86) = k1;
  *(unsigned char *)((char *)t1 + 0x88) = k1;
  *(unsigned char *)((char *)t1 + 0x89) = k1;
  *(unsigned short *)((char *)t1 + 0x8A) = k1;
  *(unsigned short *)((char *)t1 + 0x8C) = k1;
  t3 = func_00100118(t1 + 0x90, (unsigned)func_0040FAB0, 0x10, 4);
  *(unsigned *)((char *)t3 + 0x80) = k1;
  t4 = t3 + (-172);
  *(unsigned *)((char *)t3 + 0x84) = k1;
  func_00417B04(t4);
  return t4;
}
