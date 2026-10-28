typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003E300C(unsigned, unsigned, unsigned);
extern unsigned func_00560AB8(unsigned, unsigned);
unsigned func_00560A68(unsigned a0, unsigned a1)
{
  unsigned h901, t1, t2, t3, t4;
  t1 = *(unsigned *)((char *)a0 + 0x34);
  t2 = (unsigned short)t1;
  if (t2 != 3) {
    return 1;
  }
  h901 = a0;
  t3 = func_003E300C(h901, 0x38, (-1));
  t4 = *(unsigned *)((char *)a0 + 0x38);
  if (t3 != t4) {
    return 1;
  }
  return func_00560AB8(a0, a1);
}
