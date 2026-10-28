typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006F5988[];
extern void func_00150A84(unsigned, unsigned, unsigned);
extern  unsigned func_004EAF8C(unsigned, unsigned, unsigned);
void func_004EB418(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned lv[2];
  unsigned k1, t1, kt2, kt1;
  t1 = a1;
  if (a1 == 0) {
    t1 = *(unsigned *)((char *)a0 + 0x58);
  }
  k1 = (unsigned)ro_006F5988;
  if (t1 != 0) {
    *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_OBJ_PL_THROW";
    *(unsigned *)((char *)&lv[0]) = k1;
    kt1 = (unsigned)&lv[0];
    func_00150A84(t1, kt1, 0);
  }
  if (a2 == 0) {
    return;
  }
  *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_PV_THROW_S";
  *(unsigned *)((char *)&lv[0]) = k1;
  kt2 = (unsigned)&lv[0];
  func_004EAF8C(a0, kt2, 0);
  return;
}
