typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_007A9260[];
extern unsigned func_004F5494(unsigned, unsigned, unsigned, unsigned);
unsigned func_004F5520(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7;
  t1 = *(unsigned *)((char *)bss_007A9260);
  t2 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 4);
  t3 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 8);
  *(unsigned *)((char *)a0) = t1;
  *(unsigned *)((char *)a0 + 4) = t2;
  *(unsigned *)((char *)a0 + 8) = t3;
  t4 = a0 + 0x38;
  *(unsigned char *)((char *)a0 + 0x24) = 0;
  *(unsigned char *)((char *)a0 + 0x25) = 0;
  *(unsigned char *)((char *)a0 + 0x26) = 0;
  *(unsigned char *)((char *)a0 + 0x27) = 0;
  *(unsigned char *)((char *)a0 + 0x28) = 0;
  *(unsigned char *)((char *)a0 + 0x29) = 0;
  *(unsigned char *)((char *)a0 + 0x2A) = 0;
  *(float *)((char *)a0 + 0x2C) = 0.0f;
  *(unsigned *)((char *)a0 + 0x30) = 0;
  *(unsigned *)((char *)a0 + 0x34) = 0;
  t5 = *(unsigned *)((char *)bss_007A9260);
  t6 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 4);
  t7 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 8);
  *(unsigned *)((char *)t4) = t5;
  *(unsigned *)((char *)t4 + 4) = t6;
  *(unsigned *)((char *)t4 + 8) = t7;
  func_004F5494(a0, t6, t7, t4);
  return a0;
}
