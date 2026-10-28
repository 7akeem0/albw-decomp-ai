typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern unsigned func_00556A74(unsigned);
extern unsigned func_0019929C(unsigned);
extern void func_002317C0(unsigned, float, unsigned, unsigned, unsigned);
void func_00199438(unsigned a0)
{
  unsigned h901, h902, t1, t2, t3, t4;
  t1 = *(unsigned *)((char *)data_0070FB60);
  t2 = func_00556A74(t1);
  *(unsigned char *)((char *)a0 + 0x78) = t2;
  func_0019929C(a0);
  t3 = *(unsigned *)((char *)a0 + 0x1C);
  *(unsigned *)((char *)a0 + 0x4C) = t3;
  h901 = a0 + 0x46;
  *(unsigned short *)((char *)h901) = 1;
  h902 = a0;
  t4 = h902 + 0x44;
  *(unsigned short *)((char *)a0 + 0x44) = 2;
  func_002317C0(t4, 1.0f, 1, 2, t3);
  return;
}
