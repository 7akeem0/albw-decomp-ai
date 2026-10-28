typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00714E80[];
extern char bss_0079D790[];
float func_004A13D4(unsigned a0, unsigned a1, float fa0)
{
  unsigned k1, k2, r0, r1, r2, r3, r4, r12;
  unsigned t1, t2;
  float s0;
  k1 = (-306674912);
  k2 = (unsigned)bss_0079D790;
  r1 = a1;
  s0 = fa0;
  r12 = k1;
  r2 = 0;
  r4 = k2;
  do {
    r0 = r2;
    r3 = 4;
    do {
      r1 = (r0 & 1) != 0 ? (r12 ^ (r0 >> 1)) : (r0 >> 1);
      t2 = (r1 & 1) != 0 ? (r12 ^ (r1 >> 1)) : (r1 >> 1);
      r3 = r3 + (-1);
      r0 = t2;
    } while (r3 != 0);
    *(unsigned *)((char *)r4 + (r2 << 2)) = t2;
    r2 = r2 + 1;
    r1 = t1;
  } while (r2 < 256u);
  *(unsigned char *)((char *)data_00714E80) = 1;
  return s0;
}
