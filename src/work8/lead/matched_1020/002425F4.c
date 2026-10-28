typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_0069345C[];
extern char ro_00693470[];
extern char ro_00693474[];
extern char ro_006F5988[];
extern unsigned func_00588BE4(unsigned);
extern void func_00150A84(unsigned, unsigned, unsigned);
static unsigned arrAt_C_14(unsigned a, int i) { return (unsigned)i < *(unsigned *)(a + 0xC) ? *(unsigned *)(a + 0x14) + i * 4 : *(unsigned *)(a + 0x14); }
void func_002425F4(unsigned a0)
{
  unsigned lv[2];
  unsigned k1, t1, t3, t4, t5, t6, t7, kt2, kt1;
  unsigned t8, t9;
  t1 = *(unsigned *)((char *)a0 + 0x418);
  if (t1 != 0) {
    t3 = arrAt_C_14(t1, 0);
    *(float *)((char *)t3 + 0x10) = 1.0f;
  }
  t4 = func_00588BE4(a0);
  k1 = (unsigned)ro_006F5988;
  t5 = *(unsigned *)((char *)ro_0069345C);
  if (t4 == t5) {
    *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_Water_FALL_STOP_BEFORE_START";
    *(unsigned *)((char *)&lv[0]) = k1;
    kt1 = (unsigned)&lv[0];
    func_00150A84(a0, kt1, 0);
    return;
  }
  t6 = func_00588BE4(a0);
  t7 = *(unsigned *)((char *)ro_00693470);
  if (t6 != t7) {
    t8 = func_00588BE4(a0);
    t9 = *(unsigned *)((char *)ro_00693474);
    if (t8 != t9) {
      return;
    }
  }
  *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_Water_FALL_STOP";
  *(unsigned *)((char *)&lv[0]) = k1;
  kt2 = (unsigned)&lv[0];
  func_00150A84(a0, kt2, 0);
  return;
}
