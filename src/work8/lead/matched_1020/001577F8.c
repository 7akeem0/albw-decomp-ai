typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0058E2B8();
extern  unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_001577F8(unsigned a0)
{
  unsigned lv[2];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  t1 = *(unsigned *)((char *)a0 + 0x3E8);
  t2 = *(unsigned *)((char *)a0 + 0xA20);
  t3 = t1 + 0x15555555;
  t4 = t1 + (-357913941);
  t5 = t3 - t2;
  *(unsigned *)((char *)&lv[0]) = t5;
  t6 = func_0058E2B8((unsigned)&lv[0], t5, t1);
  t7 = t4 - t2;
  *(unsigned *)((char *)&lv[1]) = t7;
  t8 = func_0058E2B8((unsigned)&lv[1], t7);
  if (t6 < t8) {
    *(unsigned char *)((char *)a0 + 0xA29) = 0;
    func_004FABDC(a0, 0xA, 0, 0);
    return;
  }
  *(unsigned char *)((char *)a0 + 0xA29) = 1;
  func_004FABDC(a0, 0xC, 0, 0);
  return;
}
