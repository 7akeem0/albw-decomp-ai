typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0010CF28(unsigned, unsigned, unsigned);
extern unsigned func_00297A04(unsigned, unsigned, unsigned);
unsigned func_001522C0(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned r0, t2, t3, t4, t5, t9, t11, t12;
  unsigned t14;
  t2 = *(unsigned *)((char *)a0 + 0xDF4);
  t4 = a2;
  if (t2 != 0) {
    t4 = *(unsigned *)((char *)t2 + 0x78);
  }
  t3 = (a0 + 0xC00) + 0x1F4;
  if ((t2 != 0) && (t4 != 3)) {
    if ((t4 != 4) && (t4 != 0)) {
      return t2;
    }
  }
  *(unsigned char *)((char *)a0 + 0xDE0) = 1;
  *(unsigned *)((char *)a0 + 0xDE4) = a1;
  if (t2 != 0) {
    t5 = *(unsigned *)((char *)a0 + 0xDF0);
    ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t5) + 0x28))(t5);
  }
  t9 = func_0010CF28(0x94, *(unsigned *)((char *)a0 + 0xDF0), 4);
  r0 = t9;
  if (t9 != 0) {
    t11 = func_00297A04(t9, *(unsigned *)((char *)a0 + 0xDF0), a0);
    r0 = t11;
  }
  *(unsigned *)((char *)a0 + 0xDF4) = r0;
  *(unsigned char *)((char *)r0 + 0x90) = 2;
  t12 = *(unsigned *)((char *)t3);
  t14 = *(unsigned *)((char *)*(unsigned *)((char *)t12) + 0x14);
  return ((unsigned (*)(unsigned, unsigned))t14)(t12, t14);
}
