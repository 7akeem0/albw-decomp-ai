typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DD810[];
extern char bss_007A9260[];
extern void func_0028C920(unsigned, unsigned, unsigned, float, float);
extern unsigned func_002D5D3C(unsigned, unsigned, unsigned);
void func_002DE970(unsigned a0)
{
  unsigned t1, t2, t3;
  *(unsigned *)((char *)a0) = (unsigned)ro_006DD810;
  t1 = *(unsigned *)((char *)a0 + 0x4C);
  func_0028C920(t1, 0, (unsigned)bss_007A9260, 0.10000000149011612f, 0.5f);
  t2 = *(unsigned *)((char *)a0 + 0x2C);
  *(unsigned char *)((char *)t2 + 0xC7) = 1;
  t3 = *(unsigned *)((char *)a0 + 0x28);
  *(unsigned char *)((char *)t3 + 0x6C6) = 0;
  func_002D5D3C(a0, 0, 1);
  return;
}
