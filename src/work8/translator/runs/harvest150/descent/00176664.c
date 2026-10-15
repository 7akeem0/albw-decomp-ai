typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern unsigned func_00325CF4(unsigned, unsigned);
unsigned func_00176664(unsigned a0, unsigned a1)
{
  unsigned r0, t1, t2, t3, t4, t5, t6, t7;
  t1 = *(unsigned char *)((char *)a0 + 0x4F4);
  if (t1 == 0) {
    t2 = *(unsigned *)((char *)data_0070FB60);
    t3 = *(unsigned *)((char *)t2 + 0x24);
    t4 = *(unsigned *)((char *)t3);
    t5 = t4 + 0x20000000;
    t6 = t5 >> 0x1E;
    if ((t6 != 2) || (a1 != 2)) {
      r0 = 0;
      return r0;
    }
    t7 = func_00325CF4(a0, a1);
    r0 = t7;
    if (t7 != 0) {
      r0 = 1;
    }
    if (t7 != 0) {
      return r0;
    }
  }
  r0 = 0;
  return r0;
}
