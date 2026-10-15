typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_0015755C(unsigned a0)
{
  unsigned h901, h902, t1, t3;
  t1 = *(unsigned *)((char *)a0 + 0xA24);
  t3 = *(unsigned *)((char *)a0 + 0xA20);
  h901 = t1 + 0x14;
  h902 = *(unsigned *)((char *)a0 + 0x3E8);
  *(unsigned *)((char *)h901) = h902;
  *(unsigned *)((char *)t1 + 0x18) = t3;
  *(float *)((char *)t1) = 0.0f;
  *(float *)((char *)t1 + 4) = 1.0f;
  *(float *)((char *)t1 + 8) = 0.0416666679084301f;
  *(float *)((char *)t1 + 0x10) = 0.0f;
  *(float *)((char *)t1 + 0xC) = 0.0f;
  if (*(unsigned char *)((char *)a0 + 0xA29) != 0) {
    func_004FABDC(a0, 0xD, 0, 0);
    return;
  }
  func_004FABDC(a0, 0xB, 0, 0);
  return;
}
