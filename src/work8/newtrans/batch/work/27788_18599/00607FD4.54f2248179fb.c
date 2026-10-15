typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006E09AC[];
extern char data_0070FB60[];
extern unsigned func_0010BAB4(unsigned);
extern unsigned func_004ED00C(unsigned, unsigned);
extern void func_00361634(unsigned, unsigned);
unsigned func_00607FD4(unsigned a0)
{
  unsigned h901, r0, t1, t2, t3;
  t1 = func_0010BAB4(0x320);
  r0 = t1;
  if (t1 == 0) {
    return r0;
  }
  t2 = func_004ED00C(t1, a0);
  *(unsigned *)((char *)t2) = (unsigned)ro_006E09AC;
  t3 = *(unsigned *)((char *)data_0070FB60);
  h901 = t3;
  func_00361634(h901, 1);
  return t2;
}
