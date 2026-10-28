typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00231448(unsigned);
extern unsigned func_002317C0(unsigned, float, unsigned, unsigned, unsigned);
extern void func_00231524(unsigned);
void func_00484198(unsigned a0)
{
  unsigned h901, h902, t2;
  func_00231448(a0 + 0x60);
  t2 = *(unsigned *)((char *)a0 + 0x1C);
  *(unsigned *)((char *)a0 + 0x68) = t2;
  *(unsigned short *)((char *)a0 + 0x62) = 2;
  h901 = a0;
  h902 = h901 + 0x60;
  *(unsigned short *)((char *)h902) = 1;
  ((unsigned (*)(unsigned, float, unsigned, unsigned, unsigned))func_002317C0)(a0 + 0x60, 1.0f, 2, 1, t2);
  func_00231524(a0 + 0x6C);
  func_00231448(a0 + 0x78);
  *(unsigned char *)((char *)a0 + 0x91) = 0;
  return;
}
