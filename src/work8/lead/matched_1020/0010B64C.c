typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F56C4[];
extern unsigned func_0010C67C(unsigned);
extern unsigned func_0010B830(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_0010BAB4(unsigned, unsigned);
extern unsigned func_0010CAAC(unsigned);
unsigned func_0010B64C(unsigned a0)
{
  unsigned k1, r5, t2, t3, t5, t7, t8;
  unsigned t9, t10;
  t2 = func_0010C67C(a0 + 4);
  k1 = 0;
  t3 = (unsigned)ro_006F56C4 + 0x44;
  *(unsigned *)((char *)t2) = t3;
  t2 = t2 + (-4);
  t5 = (unsigned)ro_006F56C4 + 0x5C;
  *(unsigned *)((char *)t2) = (unsigned)ro_006F56C4;
  *(unsigned *)((char *)(t2 + 0x11C)) = t5;
  *(unsigned *)((char *)(t2 + 0x11C) + 4) = k1;
  *(unsigned *)((char *)t2 + 0x124) = k1;
  *(unsigned *)((char *)t2 + 0x128) = k1;
  *(unsigned *)((char *)t2 + 0x12C) = k1;
  *(unsigned *)((char *)t2 + 0x130) = k1;
  *(unsigned *)((char *)t2 + 0x134) = k1;
  *(unsigned *)((char *)t2 + 0x138) = k1;
  *(unsigned *)((char *)t2 + 0x13C) = k1;
  *(unsigned *)((char *)t2 + 0x140) = k1;
  *(unsigned *)((char *)t2 + 0x144) = k1;
  *(unsigned char *)((char *)t2 + 0x148) = k1;
  t7 = func_0010B830(t2 + 0x14C, t3, (unsigned)ro_006F56C4, t5);
  t8 = t7 + (-332);
  *(unsigned char *)((char *)t7 + 0x1C) = k1;
  t9 = func_0010BAB4(0x230, r5);
  t10 = t9;
  if (t9 != 0) {
    t10 = func_0010CAAC(t9);
  }
  *(unsigned *)((char *)t8 + 0x140) = t10;
  return t8;
}
