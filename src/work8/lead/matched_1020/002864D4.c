typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_006611F8(unsigned, unsigned);
unsigned func_002864D4(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6, t8;
  unsigned t9, t10, t11;
  t1 = a0 + 0x400;
  t2 = *(unsigned char *)((char *)t1 + 0x60);
  if (t2 != 0) {
    return 0;
  }
  t3 = *(unsigned *)((char *)a0 + 0x50);
  t4 = *(unsigned *)((char *)a1 + 0x28);
  if (t4 == t3) {
    return 0;
  }
  t5 = *(unsigned char *)((char *)t1 + 0x10);
  if (t5 != 1) {
    t6 = a0 + 0x400;
    func_006611F8((t6 + 0xC), 1);
  }
  t8 = *(unsigned short *)((char *)a1 + 0x20);
  t9 = t8 & 0x7E0;
  t10 = t9 >> 5;
  t11 = t10 == 7 ? 1 : 0;
  *(unsigned char *)((char *)a0 + 0x460) = t11;
  return 1;
}
