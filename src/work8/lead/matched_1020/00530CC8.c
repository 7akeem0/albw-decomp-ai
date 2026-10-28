typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

float func_00530CC8(unsigned a0, unsigned a1)
{
  unsigned t1;
  float s0;
  t1 = *(signed char *)((char *)a0 + 0x8C0);
  if (a1 != 0) {
    s0 = 1.0f;
    if (t1 != 22u) {
      L2:;
      s0 = 0.0f;
    }
    return s0;
  }
  if ((t1 != 25u) || (*(unsigned char *)((char *)a0 + 0xA6C) != 0)) goto L2;
  return 1.0f;
}
