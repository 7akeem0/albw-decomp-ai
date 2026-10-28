static __inline unsigned l2c_fbits(float x) { union { float f; unsigned u; } v; v.f=x; return v.u; }
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693950[];
extern unsigned func_00588BE4(unsigned);
extern unsigned func_001AB87C(unsigned);
unsigned func_001AC3E0(unsigned a0)
{
  unsigned h901, r0, t1, t3, t4;
  t1 = func_00588BE4(a0);
  r0 = t1;
  h901 = *(unsigned *)((char *)ro_00693950);
  if (t1 == h901) {
    func_001AB87C(a0);
    t3 = a0 + 0x800;
    *(float *)((char *)t3 + 0x1B8) = 1.0f;
    t4 = *(unsigned *)((char *)a0 + 0x40C);
    r0 = t3;
    if (t4 != 0) {
      r0 = l2c_fbits(1.0f);
      *(unsigned *)((char *)t4 + 0x158) = r0;
    }
  }
  return r0;
}
