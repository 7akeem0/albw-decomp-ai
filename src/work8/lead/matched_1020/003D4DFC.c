typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_003D4DFC(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r0, r1, r2, r3, r4, r5, r12, t5;
  unsigned t7, t9;
  float s0;
  if ((int)a2 <= 0) {
    return a0;
  }
  r12 = a3 + 2;
  r0 = a3 + 4;
  r4 = a1 + 4;
  r5 = a1 + 8;
  r1 = a1;
  r2 = a2;
  r3 = a3;
  s0 = 0.001953125f;
  do {
    t5 = *(short *)((char *)r3);
    r3 = r3 + 6;
    r2 = r2 + (-1);
    *(float *)((char *)r1) = ((float)(int)t5) * s0;
    t7 = *(short *)((char *)r12);
    r12 = r12 + 6;
    r1 = r1 + 0xC;
    *(float *)((char *)r4) = ((float)(int)t7) * s0;
    t9 = *(short *)((char *)r0);
    r0 = r0 + 6;
    r4 = r4 + 0xC;
    *(float *)((char *)r5) = ((float)(int)t9) * s0;
    r5 = r5 + 0xC;
  } while (r2 != 0);
  return r0;
}
