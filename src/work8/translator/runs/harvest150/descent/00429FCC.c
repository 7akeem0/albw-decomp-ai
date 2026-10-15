typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00179664(unsigned);
extern unsigned func_0042A064(unsigned, unsigned, unsigned);
unsigned func_00429FCC(unsigned a0)
{
  unsigned h901, r0, t2, t3, t4, t5, t6, t10;
  unsigned t11, t12;
  r0 = *(unsigned char *)((char *)a0 + 0x2A);
  if (r0 == 0) {
    return r0;
  }
  t2 = *(unsigned short *)((char *)a0 + 0x22);
  if (t2 != 0) {
    t3 = a0;
    func_00179664(t3);
  }
  t4 = *(unsigned short *)((char *)a0 + 0x38);
  h901 = a0 + 0x3F;
  t5 = *(unsigned char *)((char *)h901);
  *(unsigned char *)((char *)a0 + 0x2B) = 0;
  *(unsigned char *)((char *)a0 + 0x2D) = 0;
  *(unsigned short *)((char *)a0 + 0x32) = 0;
  *(unsigned short *)((char *)a0 + 0x36) = t4;
  *(unsigned short *)((char *)a0 + 0x3A) = 0;
  *(unsigned char *)((char *)a0 + 0x3C) = 0;
  t6 = *(unsigned char *)((char *)a0 + 0x28);
  if (t5 != 0) {
    if (t6 != 0) {
      *(unsigned short *)((char *)a0 + 0x22) = t2;
    }
    if (t6 != 0) {
      r0 = 0;
      return r0;
    }
    *(unsigned short *)((char *)a0 + 0x22) = *(unsigned short *)((char *)a0 + 0x30) >> 1;
  } else {
    if (t6 != 0) {
      r0 = 0;
      return r0;
    }
  }
  t10 = *(unsigned short *)((char *)a0 + 0x34);
  t11 = *(unsigned *)((char *)a0 + 8);
  t12 = *(unsigned short *)((char *)a0 + 0x22) << 1;
  return func_0042A064(t11, t12, t10);
}
