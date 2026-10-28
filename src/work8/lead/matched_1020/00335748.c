typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00325DE0(unsigned, unsigned);
unsigned func_00335748(unsigned a0, unsigned a1) {
  unsigned t2;
  float h902, x3, x5;
  x3 = (*(float *)((char *)a0 + 0x3D4)) - (*(float *)((char *)a0 + 0x36C));
  x5 = x3 > 0.0f ? x3 : -x3;
  h902 = *(float *)((char *)((a0 + 0x400) + 0xC4));
  if (x5 > h902) {
    t2 = *(unsigned char *)((char *)a0 + 0x508);
    if (t2 == 0) return 0;
  }
  return func_00325DE0(a0, a1);
}
