typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_005811E8(unsigned);
extern unsigned func_0033CA24(unsigned, unsigned, float);
void func_0033BB44(unsigned a0)
{
  unsigned t3, t6;
  t3 = func_005811E8((a0 + 0x400) + 0xFC);
  if (t3 != 0) {
    ((unsigned (*)(unsigned, unsigned, float))func_0033CA24)(a0, (a0 + 0x400) + 0xFC, 5.5f);
  }
  t6 = func_005811E8((a0 + 0x400) + 0x104);
  if (t6 != 0) {
    ((unsigned (*)(unsigned, unsigned, float))func_0033CA24)(a0, (a0 + 0x400) + 0x104, 6.0f);
    return;
  }
  return;
}
