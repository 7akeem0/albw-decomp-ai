typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709D28[];
extern void func_004A9120(unsigned, unsigned);
extern void func_004A8BFC(unsigned, unsigned, unsigned);
void func_0018AFD4(unsigned a0)
{
  unsigned h901, k2, t3, t5, t6, t11, t14;
  h901 = a0 + 0x410;
  func_004A9120(*(unsigned *)((char *)data_00709D28), h901);
  t3 = *(unsigned *)((char *)data_00709D28);
  func_004A8BFC(t3, a0 + 0x410, 3);
  t5 = a0 + 0x400;
  k2 = 0x1F00;
  t6 = a0 + 0x550;
  *(unsigned short *)((char *)t5 + 0x42) = k2;
  *(unsigned *)((char *)a0 + 0x42C) = t6;
  func_004A9120(*(unsigned *)((char *)data_00709D28), (a0 + 0x400) + 0x78);
  func_004A8BFC(*(unsigned *)((char *)data_00709D28), (a0 + 0x400) + 0x78, 3);
  *(unsigned short *)((char *)t5 + 0xAA) = k2;
  *(unsigned *)((char *)a0 + 0x494) = t6;
  t11 = *(unsigned *)((char *)a0 + 0x420);
  *(unsigned *)((char *)t11 + 0x2C) = *(unsigned *)((char *)t11 + 0x2C) | 0x40000;
  t14 = *(unsigned *)((char *)a0 + 0x488);
  *(unsigned *)((char *)t14 + 0x2C) = *(unsigned *)((char *)t14 + 0x2C) | 0x40000;
  return;
}
