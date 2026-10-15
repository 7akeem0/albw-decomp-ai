typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006938F0[];
extern char data_00709DF8[];
extern unsigned func_00588BE4(unsigned);
float func_00530874(unsigned a0)
{
  unsigned h901, t1, t4;
  float s0;
  t1 = func_00588BE4(a0);
  h901 = *(unsigned *)((char *)ro_006938F0);
  if (t1 == h901) {
    t4 = *(unsigned char *)((char *)*(unsigned *)((char *)data_00709DF8) + 0x18);
    if (t4 == 20u) {
      s0 = 2.0f;
    }
    if (t4 == 20u) {
      return s0;
    }
  }
  s0 = 1.0f;
  return s0;
}
