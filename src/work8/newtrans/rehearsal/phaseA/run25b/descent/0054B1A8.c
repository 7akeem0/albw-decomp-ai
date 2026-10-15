typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F599C[];
extern char data_0070D7D0[];
extern unsigned func_00582888(unsigned, unsigned);
extern unsigned func_00582858(unsigned, unsigned);
void func_0054B1A8(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned k1, t6, t9, t16;
  k1 = (unsigned)data_0070D7D0;
  t6 = func_00582888(*(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)k1) + 0x60) + 0x10), *(unsigned short *)((char *)*(unsigned *)((char *)a0 + 0xF0) + 0xC));
  *(unsigned *)((char *)a1 + 8) = t6;
  *(unsigned *)((char *)a1 + 0xC) = *(unsigned short *)((char *)*(unsigned *)((char *)a0 + 0xF0) + 0xC);
  t9 = *(unsigned *)((char *)k1);
  *(unsigned *)((char *)a1 + 4) = *(unsigned *)((char *)*(unsigned *)((char *)t9 + 0x60) + 0x10);
  t16 = func_00582858(*(unsigned *)((char *)*(unsigned *)((char *)t9 + 0x60) + 0x10), *(unsigned short *)((char *)*(unsigned *)((char *)a0 + 0xF0) + 0xC));
  *(unsigned *)((char *)&lv[1]) = t16;
  *(unsigned *)((char *)&lv[0]) = (unsigned)ro_006F599C;
  ((unsigned (*)(unsigned))*(unsigned *)((char *)(unsigned)ro_006F599C + 8))((unsigned)&lv[0]);
  *(unsigned *)((char *)a1) = *(unsigned *)((char *)&lv[1]);
  return;
}
