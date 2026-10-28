typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004D80A4(unsigned, unsigned, float);
void func_001A7764(unsigned a0)
{
  unsigned t1, t2, t3, ka1;
  ka1 = a0 + 0x3E4;
  *(float *)((char *)ka1) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  func_004FABDC(a0, 4, (-1), 0);
  a0 = a0 + 0x3E8;
  t1 = *(unsigned *)((char *)a0);
  t2 = *(unsigned *)((char *)a0 + 0x4FC);
  t3 = t2 + 0x24;
  func_004D80A4(t3, t1, 1.0f);
  *(float *)((char *)t3 + 4) = 0.0f;
  return;
}
