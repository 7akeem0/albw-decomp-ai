typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006DD780[];
extern char data_0070B960[];
extern char data_0070BB80[];
extern unsigned func_004CF864();
extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_001DDB38(unsigned, unsigned);
extern unsigned func_002706E0(unsigned, unsigned);
extern unsigned func_002D5D3C(unsigned, unsigned);
void func_002DBB9C(unsigned a0)
{
  unsigned k1, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11;
  *(unsigned *)((char *)a0) = (unsigned)ro_006DD780;
  t1 = *(unsigned *)((char *)a0 + 0x4C);
  *(float *)((char *)t1 + 0x100) = 1.0f;
  t2 = *(unsigned *)((char *)a0 + 0x74);
  ((unsigned (*)(unsigned, unsigned, unsigned, float))func_004CF864)(t2, 0, (-1), 1.0f);
  t3 = *(unsigned *)((char *)a0 + 0x74);
  func_004CF478(t3, 0, 0);
  t4 = *(unsigned *)((char *)a0 + 0x78);
  func_004CF864(t4, 0, (-1));
  t5 = *(unsigned *)((char *)a0 + 0x78);
  func_004CF478(t5, 0, 0);
  t6 = *(unsigned *)((char *)a0 + 0x28);
  func_001DDB38(t6, 0);
  k1 = (unsigned)data_0070BB80;
  t7 = *(unsigned *)((char *)k1);
  func_002706E0(t7, (-1));
  t8 = *(unsigned *)((char *)k1);
  *(unsigned char *)((char *)t8 + 0x5C) = 0;
  t9 = *(unsigned *)((char *)data_0070B960);
  t10 = t9 + 0x2C00;
  t11 = t10 + 0x1C;
  *(unsigned char *)((char *)t11) = 0;
  func_002D5D3C(a0, 0);
  return;
}
