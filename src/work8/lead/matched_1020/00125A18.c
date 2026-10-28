typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0058A1F4(unsigned);
extern unsigned func_0051D960(unsigned, unsigned);
float func_00125A18(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3;
  float s0, x1;
  t1 = *(signed char *)((char *)a1 + 0x21);
  t2 = func_0058A1F4(a0);
  if (t2 != 0) {
    if (t1 == 8) {
      s0 = 100.0f;
    }
    if (t1 == 8) {
      return s0;
    }
  } else {
    t3 = func_0051D960(a0, 0);
    if (t3 != 0) {
      x1 = 0.0f;
    }
    s0 = x1;
    if (t3 != 0) {
      return s0;
    }
  }
  s0 = 1.0f;
  return s0;
}
