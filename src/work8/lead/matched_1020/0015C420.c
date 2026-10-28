typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00708998[];
extern void func_0015AD54(unsigned, unsigned, unsigned, float);
extern unsigned func_004ED46C(unsigned, unsigned);
extern void func_0015D0E0(unsigned);
static unsigned arrAt_C_14(unsigned a, int i) { return (unsigned)i < *(unsigned *)(a + 0xC) ? *(unsigned *)(a + 0x14) + i * 4 : *(unsigned *)(a + 0x14); }
void func_0015C420(unsigned a0)
{
  unsigned t1, t2, t4;
  func_0015AD54(a0, 0xF, (-1), 0.0f);
  t1 = *(unsigned *)((char *)data_00708998);
  func_004ED46C(t1, 2);
  func_0015D0E0(a0);
  t2 = *(unsigned *)((char *)a0 + 0xE5C);
  t4 = arrAt_C_14(t2, 0);
  *(float *)((char *)t4 + 0x10) = 1.0f;
  return;
}
