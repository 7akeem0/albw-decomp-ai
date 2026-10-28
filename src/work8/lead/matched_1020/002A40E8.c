typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_002A40E8(unsigned a0)
{
  unsigned h901, h902, r0, t1, t2, t3, t4, t5;
  float x4, x5, x9, x10, x14, x15;
  t1 = *(unsigned *)((char *)a0 + 0xB48);
  t2 = *(short *)((char *)a0 + 0x508);
  x4 = (float)(int)t2;
  x5 = ((float)(int)t1) * 0.3199999928474426f;
  t3 = t2;
  if (x5 > x4) {
    t3 = 4;
  }
  r0 = t3;
  if (x5 > x4) {
    return r0;
  }
  x9 = (float)(int)t3;
  h901 = t1;
  x10 = ((float)(int)h901) * 0.75f;
  t4 = t3;
  if (x10 > x9) {
    t4 = 3;
  }
  r0 = t4;
  if (x10 > x9) {
    return r0;
  }
  x14 = (float)(int)t4;
  h902 = t1;
  x15 = ((float)(int)h902) * 0.8499999642372131f;
  t5 = t4;
  if (x15 > x14) {
    t5 = 2;
  }
  r0 = t5;
  if (x15 > x14) {
    return r0;
  }
  r0 = (((float)(int)t1) * 0.949999988079071f) > ((float)(int)t5) ? 1 : 0;
  return r0;
}
