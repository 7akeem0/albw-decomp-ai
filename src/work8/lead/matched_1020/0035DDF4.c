typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_0069F5AC[];
extern void func_0010B380(unsigned, unsigned, unsigned, unsigned);
unsigned func_0035DDF4(unsigned a0)
{
  unsigned h901, h902, h903, r0;
  int r1;
  unsigned r4, r12, t2, t3, t4, t5, t10, t11;
  unsigned t12, t14;
  r4 = a0;
  func_0010B380(a0 + 0x9B0, 0xF, 0, 4);
  r12 = (unsigned)ro_0069F5AC;
  r1 = 0;
  do {
    t2 = r4 + 0x9B0;
    t4 = *(unsigned *)((char *)t2);
    h901 = t2;
    t5 = *(unsigned *)((char *)h901 + 4);
    t3 = r12 + ((unsigned)r1 << 1);
    if ((int)t4 < (int)t5) {
      h902 = t3;
      *(unsigned *)((char *)*(unsigned *)((char *)t2 + 8) + (t4 << 2)) = h902;
      *(unsigned *)((char *)t2) = *(unsigned *)((char *)t2) + 1;
    }
    r1 = (unsigned)r1 + 1;
  } while ((int)(unsigned)r1 < 0xE);
  t10 = r4 + 0x9B0;
  t11 = r4 + 0x800;
  t12 = *(unsigned *)((char *)t10);
  t14 = t11 + 0x1FC;
  r0 = t14;
  if ((int)*(unsigned *)((char *)t10 + 4) > (int)t12) {
    h903 = *(unsigned *)((char *)r4 + 0x9B8);
    *(unsigned *)((char *)h903 + (t12 << 2)) = t14;
    r0 = *(unsigned *)((char *)r4 + 0x9B0) + 1;
    *(unsigned *)((char *)r4 + 0x9B0) = r0;
  }
  return r0;
}
