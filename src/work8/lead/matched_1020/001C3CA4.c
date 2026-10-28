typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00151150(unsigned, unsigned);
extern unsigned func_00688C34(unsigned, float, float);
extern  unsigned func_0065BB78(unsigned, unsigned);
void func_001C3CA4(unsigned a0)
{
  unsigned lv[3];
  unsigned t1, t2, t4, t5, t6, t7, t8;
  unsigned t9;
  float x1, x2, x3;
  t1 = a0 + 0x400;
  x1 = *(float *)((char *)t1 + 0x3F0);
  x2 = x1 * 0.5f;
  x3 = x2 * x1;
  *(float *)((char *)&lv[0]) = x3;
  *(float *)((char *)&lv[1]) = x3;
  *(float *)((char *)&lv[2]) = x3;
  t2 = *(unsigned *)((char *)a0 + 0x7C0);
  func_00151150(t2, (unsigned)&lv[0]);
  t4 = func_00688C34((a0 + 0x7F0), 0.0f, 0.009999999776482582f);
  t5 = *(unsigned *)((char *)a0 + 0x7B0);
  t6 = *(unsigned *)((char *)t1 + 0x3F0);
  *(unsigned *)((char *)t5 + 0x158) = t6;
  t7 = *(unsigned *)((char *)a0 + 0x7B4);
  t8 = *(unsigned *)((char *)t1 + 0x3F0);
  *(unsigned *)((char *)t7 + 0x158) = t8;
  if (t4 != 0) {
    t9 = a0 + 0x400;
    func_0065BB78((t9 + 0x388), 4);
  }
  return;
}
