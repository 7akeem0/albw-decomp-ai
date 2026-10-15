typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F51D8[];
extern unsigned func_0010BAB4(unsigned, unsigned);
extern unsigned func_0010C51C(unsigned);
extern unsigned func_0010C5EC(unsigned);
unsigned func_0010B418(unsigned a0)
{
  unsigned h901, r5, t1, t2, t3, t4;
  h901 = a0 + 4;
  *(unsigned *)((char *)h901) = 0;
  *(unsigned *)((char *)a0 + 8) = 0;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F51D8;
  *(unsigned *)((char *)a0 + 0xC) = 0;
  *(unsigned *)((char *)a0 + 0x10) = 0;
  *(unsigned *)((char *)a0 + 0x14) = 0;
  t1 = func_0010BAB4(0x3C, r5);
  t2 = t1;
  if (t1 != 0) {
    t2 = func_0010C51C(t1);
  }
  *(unsigned *)((char *)a0 + 0xC) = t2;
  t3 = func_0010BAB4(0x6C, r5);
  t4 = t3;
  if (t3 != 0) {
    t4 = func_0010C5EC(t3);
  }
  *(unsigned *)((char *)a0 + 0x10) = t4;
  return a0;
}
