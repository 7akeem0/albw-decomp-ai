typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_00693944[];
extern char ro_006F5988[];
extern char data_00711F50[];
extern unsigned func_00588BE4(unsigned, unsigned);
extern unsigned func_0058AB90(unsigned);
extern unsigned func_002DF0B0(unsigned, unsigned, unsigned);
extern void func_00150A84(unsigned, unsigned, unsigned);
unsigned func_001AD084(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned k1, t1, t2, t3, t4, kt2, kt1;
  if (a1 == 3) {
    t1 = func_00588BE4(a0, a1);
    t2 = *(unsigned *)((char *)ro_00693944);
    if (t1 != t2) {
      return a1;
    }
    t3 = func_0058AB90(a0);
    if (t3 == 0) {
      return a1;
    }
    *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_Poe_LAUGH_FLY";
    k1 = (unsigned)ro_006F5988;
    *(unsigned *)((char *)&lv[0]) = k1;
    t4 = *(unsigned *)((char *)data_00711F50);
    kt1 = (unsigned)&lv[0];
    func_002DF0B0(t4, kt1, 0);
    *(unsigned *)((char *)&lv[1]) = (unsigned)"SE_Poe_LAUGH_ATTACK";
    *(unsigned *)((char *)&lv[0]) = k1;
    kt2 = (unsigned)&lv[0];
    func_00150A84(a0, kt2, 0);
  }
  return a1;
}
