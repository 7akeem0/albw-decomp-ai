typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00716238[];
extern float func_0010E3C4(unsigned, unsigned, unsigned);
float func_003F6E1C(unsigned a0, float fa0)
{
  unsigned h901, r4, t1, t2, t3, t4, t5, t6;
  unsigned t7, t8, t10, t11;
  float s0, x1;
  *(unsigned *)((char *)(unsigned)data_00716238 + 4) = 0;
  h901 = a0;
  t1 = *(unsigned *)((char *)h901 + 0x144);
  t2 = *(unsigned *)((char *)data_00716238);
  t3 = *(unsigned *)((char *)(unsigned)data_00716238 + 0x18);
  t4 = t1 + 0x23C;
  s0 = fa0;
  r4 = t2;
  if (t2 != 0) {
    t5 = t4 + (t3 << 2);
    t6 = *(unsigned *)((char *)t4 + (t3 << 2));
    t7 = *(unsigned *)((char *)t5 + 8);
    r4 = t2;
    s0 = fa0;
    if ((t7 != 0) && (t6 != 0)) {
      t8 = t7 << 2;
      x1 = func_0010E3C4(t2, t6, t8);
      r4 = t2 + (t7 << 2);
      s0 = x1;
    }
  }
  *(unsigned *)((char *)data_00716238) = r4;
  t10 = *(unsigned *)((char *)(unsigned)data_00716238 + 8);
  t11 = t10 + 1;
  *(unsigned *)((char *)(unsigned)data_00716238 + 8) = t11;
  return s0;
}
