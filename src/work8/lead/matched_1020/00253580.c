typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0065FE3C(unsigned, unsigned);
unsigned func_00253580(unsigned a0, unsigned a1)
{
  unsigned k1, r0, t1, t2, t4;
  k1 = 0;
  t1 = a0 + 0x400;
  t2 = a0 + 0x700;
  if (a1 != 0) {
    if (a1 != 1) goto L12;
  } else {
    if (*(unsigned char *)((char *)t1 + 0x24) != 9) {
      func_0065FE3C(a0 + 0x420, 9);
      *(unsigned char *)((char *)a0 + 0x7F4) = k1;
      goto L12;
    }
    t4 = *(unsigned char *)((char *)t2 + 0xF4);
    r0 = t4;
    if (t4 != 0) {
      r0 = 1;
    }
    if (t4 != 0) goto L11;
    goto L12;
  }
  if (*(unsigned char *)((char *)t1 + 0x24) != 10u) {
    func_0065FE3C(a0 + 0x420, 0xA);
    *(unsigned char *)((char *)a0 + 0x7F4) = k1;
    goto L12;
  }
  if (*(unsigned char *)((char *)t2 + 0xF4) == 0) goto L12;
  func_0065FE3C(a0 + 0x420, 6);
  r0 = 1;
  L11:;
  return r0;
  L12:;
  return 0;
}
