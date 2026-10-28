typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070D858[];
extern unsigned func_001722A4(unsigned, unsigned);
unsigned func_0030F808(unsigned a0, unsigned a1)
{
  unsigned k1, r0, t1, t2, t3, t6, ka5;
  if (a1 != 0) {
    t6 = a0;
    if (a1 == 1) {
      t6 = *(unsigned char *)((char *)a0 + 0x852);
    }
    if ((a1 == 1) && (t6 == 2)) {
      r0 = 0;
      goto L5;
    }
  } else {
    k1 = (unsigned)data_0070D858;
    t1 = *(unsigned char *)((char *)a0 + 0x998);
    t2 = *(unsigned *)((char *)k1);
    func_001722A4(t2, t1);
    t3 = *(unsigned *)((char *)k1);
    *(unsigned char *)((char *)t3 + 0x2EB) = 0;
    *(unsigned char *)((char *)t3 + 0x2EC) = 1;
    ka5 = a0 + 0x8AC;
    *(unsigned *)((char *)ka5) = *(unsigned *)((char *)a0 + 0x8AC) | 0x10;
  }
  r0 = 1;
  L5:;
  return r0;
}
