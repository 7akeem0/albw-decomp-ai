static __inline unsigned l2c_fbits(float x) { union { float f; unsigned u; } v; v.f=x; return v.u; }
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00545A08(unsigned, unsigned);
extern void func_004BDB20(unsigned);
void func_002CC18C(unsigned a0)
{
  float x1, x2;
  {
    unsigned lv[3];
    func_00545A08(a0, (unsigned)&lv[0]);
    x1 = *(float *)((char *)&lv[0]);
    x2 = *(float *)((char *)&lv[2]);
  }
  if ((int)(l2c_fbits((x1 * x1) + (x2 * x2))) < 0x41100000) {
    func_004BDB20(a0);
    return;
  }
  return;
}
