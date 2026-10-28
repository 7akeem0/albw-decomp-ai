typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_007A3DC4[];
extern unsigned func_00417118(unsigned, unsigned);
void func_0041BD84(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned lv[4];
  unsigned t3, t4, t6, t7;
  if (*(unsigned *)((char *)a0 + 0x88) == 0) {
    return;
  }
  *(unsigned *)((char *)&lv[0]) = a0 + 0xD0;
  t3 = a2 + 0x1C;
  *(unsigned *)((char *)&lv[1]) = (unsigned)bss_007A3DC4;
  t4 = func_00417118(a2, 0);
  *(unsigned *)((char *)&lv[2]) = t4;
  *(unsigned char *)((char *)&lv[3]) = *(unsigned char *)((char *)t3 + 8);
  a0 = a0 + 0x88;
  t6 = *(unsigned *)((char *)a0);
  t7 = *(unsigned *)((char *)a0 + 4);
  ((unsigned (*)(unsigned, unsigned, unsigned))t6)(a1, (unsigned)&lv[0], t7);
  *(unsigned char *)((char *)t3 + 8) = *(unsigned char *)((char *)&lv[3]);
  return;
}
