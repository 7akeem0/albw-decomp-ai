typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_007A9260[];
void func_0037BCCC(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9;
  t2 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 4);
  t1 = *(unsigned *)((char *)bss_007A9260);
  t3 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 8);
  *(unsigned *)((char *)a0) = t1;
  *(unsigned *)((char *)a0 + 4) = t2;
  *(unsigned *)((char *)a0 + 8) = t3;
  t4 = *(unsigned *)((char *)bss_007A9260);
  t5 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 4);
  t6 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 8);
  *(unsigned *)((char *)a0 + 0x14) = t6;
  *(unsigned *)((char *)a0 + 0xC) = t4;
  *(unsigned *)((char *)a0 + 0x10) = t5;
  t7 = *(unsigned *)((char *)bss_007A9260);
  t8 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 4);
  t9 = *(unsigned *)((char *)(unsigned)bss_007A9260 + 8);
  *(unsigned *)((char *)a0 + 0x20) = t9;
  *(unsigned *)((char *)a0 + 0x18) = t7;
  *(unsigned *)((char *)a0 + 0x1C) = t8;
  *(float *)((char *)a0 + 0x24) = 0.0f;
  *(float *)((char *)a0 + 0x28) = 0.0f;
  *(float *)((char *)a0 + 0x2C) = 0.0f;
  return;
}
