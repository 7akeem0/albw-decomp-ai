/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern char ro_006E1998[];
extern unsigned func_0010BAB4(unsigned);
extern unsigned func_003310B8(unsigned, unsigned);
extern unsigned func_00330F70(unsigned, unsigned, float);
extern unsigned func_0014E428(unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
extern void func_004D8AEC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
unsigned func_00608304(unsigned a0)
{
  unsigned r0, t1, t2, t3, t4;
  t1 = func_0010BAB4(0x418);
  r0 = t1;
  if (t1 == 0) {
    return r0;
  }
  t2 = func_003310B8(t1, a0);
  t3 = (unsigned)ro_006E1998 + 0x54;
  *(unsigned *)((char *)t2) = (unsigned)ro_006E1998;
  *(unsigned *)((char *)t2 + 0x320) = t3;
  ((unsigned (*)(unsigned, unsigned, float))func_00330F70)(t2, t3, 0.20000000298023224f);
  t4 = func_0014E428(t2, 0, 0, 0, 1, 0, 0);
  *(unsigned *)((char *)t2 + 0x40C) = t4;
  ((BFlag *)(t4 + 0x164))->change(0x40000000, true);
  func_004D8AEC(t4 + 0x80, *(unsigned *)((char *)t2 + 0x3E8), t2 + 0x3D0);
  func_004CEAF0(*(unsigned *)((char *)t2 + 0x40C));
  r0 = t2;
  return r0;
}
