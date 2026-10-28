typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

float func_0058A404(unsigned a0)
{
  unsigned t1, t2, t3;
  float s0;
  t1 = a0 + 0x500;
  t2 = *(short *)((char *)t1 + 8);
  t3 = t1;
  if ((int)t2 > 0) {
    t3 = *(short *)((char *)t1 + 0xA);
  }
  s0 = 0.0f;
  if ((int)t2 > 0 && (int)t3 > 0) {
    s0 = ((float)(int)t2) / ((float)(int)t3);
  }
  return s0;
}
