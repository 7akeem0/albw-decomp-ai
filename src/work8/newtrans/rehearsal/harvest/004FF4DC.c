typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00521184(unsigned);
extern void func_00115154(unsigned, unsigned, unsigned);
extern  unsigned func_0066AF2C(unsigned, unsigned);
void func_004FF4DC(unsigned a0)
{
  unsigned lv[2];
  unsigned h901, r0, t3, t5, t6, t7, t10;
  t3 = (a0 + 0x800) + 0xBC;
  r0 = t3;
  if (*(unsigned char *)((char *)a0 + 0x910) == 0) {
    t5 = (a0 + 0x800) + 0xE8;
    t7 = *(unsigned *)((char *)t5 + 4);
    t6 = *(unsigned *)((char *)t5);
    r0 = t3;
    if (t6 < t7) {
      r0 = t6 + 1;
    }
    if (t6 < t7) {
      *(unsigned *)((char *)a0 + 0x8E8) = r0;
    }
    if (t6 < t7) {
      t10 = func_00521184(a0);
      h901 = a0 + 0x8E0;
      *(unsigned *)((char *)h901) = t10;
      *(float *)((char *)&lv[0]) = 0.0f;
      *(float *)((char *)&lv[1]) = 0.0f;
      func_00115154((unsigned)&lv[1], (unsigned)&lv[0], t10);
      *(float *)((char *)a0 + 0x3DC) = (*(float *)((char *)&lv[1])) * 0.012500000186264515f;
      *(float *)((char *)a0 + 0x3E4) = (*(float *)((char *)&lv[0])) * 0.012500000186264515f;
      return;
    }
  }
  func_0066AF2C(r0, 3);
  return;
}
