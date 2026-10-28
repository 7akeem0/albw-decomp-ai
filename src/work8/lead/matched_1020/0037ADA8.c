typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F54FC[];
extern char ro_006F554C[];
extern char ro_006F5930[];
extern unsigned func_00490C38();
extern unsigned func_004A1520(unsigned);
extern void func_0010F1F8(unsigned);
extern void func_0049FAD8(unsigned);
void func_0037ADA8(unsigned a0)
{
  unsigned h901, h902, k2, t1, t2, t4, t6, t7, kt1;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F554C;
  h901 = a0;
  a0 = h901 + 0x184;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F5930;
  kt1 = (unsigned)ro_006F554C;
  func_00490C38(a0, kt1);
  t1 = func_004A1520(a0);
  t2 = t1 + (-80);
  *(unsigned *)((char *)t1 - 80) = (unsigned)ro_006F5930;
  func_00490C38(t2);
  t4 = (func_004A1520(t2)) + (-308);
  t4 = t4 + 0xF8;
  *(unsigned *)((char *)t4) = (unsigned)ro_006F54FC;
  h902 = t4 + 0x38;
  if (*(unsigned char *)((char *)h902) != 0) {
    t6 = *(unsigned *)((char *)t4 + 0x1C);
    k2 = 0;
    t7 = t4 + 0x10;
    if (t6 != 0) {
      *(unsigned *)((char *)t7 + 0xC) = k2;
      func_0010F1F8(t7);
      *(unsigned *)((char *)t6 + 8) = *(unsigned *)((char *)t6 + 8) + (-1);
    }
    *(unsigned char *)((char *)t4 + 0x38) = k2;
  }
  func_0049FAD8((func_004A1520(t4)) + (-248));
  return;
}
