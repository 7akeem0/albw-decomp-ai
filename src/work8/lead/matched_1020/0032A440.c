typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

float func_0032A440(unsigned a0, unsigned a1)
{
  unsigned t1;
  float s0;
  t1 = *(signed char *)((char *)a0 + 0xBAC);
  s0 = 0.0f;
  if ((t1 != 16u) && (t1 != 17u)) {
    s0 = 0.0f;
    if (t1 == 18u) {
      return s0;
    }
    if ((*(unsigned char *)((char *)a1 + 0x21) == 3) && (*(unsigned char *)((char *)a1 + 0x23) == 1)) {
      s0 = 0.0f;
      if ((int)(*(unsigned *)((char *)a0 + 0x59C) << 0x18) >= 0) {
        return s0;
      }
    }
    s0 = 1.0f;
  }
  return s0;
}
