typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693A4C[];
extern char data_00706E20[];
extern unsigned func_00318BBC(unsigned, unsigned, float);
extern unsigned func_005841A8(unsigned, unsigned, unsigned);
void func_003193FC(unsigned a0)
{
  unsigned t5, t6, t8, t9, t10;
  *(float *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x414) + 0x14) + 0x10) = 1.0f;
  func_00318BBC(a0, 0, 1.0f);
  *(float *)((char *)(a0 + 0x400) + 0xC8) = 0.0f;
  *(float *)((char *)*(unsigned *)((char *)a0 + 0x410) + 0x158) = 0.0f;
  t5 = *(unsigned *)((char *)data_00706E20);
  if (t5 == 0) {
    return;
  }
  t6 = *(unsigned *)((char *)ro_00693A4C);
  t8 = func_005841A8(t5, t6, (*(unsigned *)((char *)t5 + 0x3DBC0)));
  t9 = *(unsigned *)((char *)t8);
  if (t9 != 0) {
    t10 = *(unsigned *)((char *)t9 + 0x2CC);
    *(unsigned *)((char *)a0 + 0x52C) = t10;
  }
  return;
}
