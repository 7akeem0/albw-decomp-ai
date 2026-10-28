typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00711010[];
extern void func_002C2C9C(unsigned, unsigned);
extern unsigned func_002C2D00(unsigned);
extern  void func_002D42E8(unsigned);
void func_0038AF80(unsigned a0)
{
  unsigned lv[16];
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10;
  t1 = *(unsigned char *)((char *)a0 + 0x1C);
  t2 = *(unsigned *)((char *)data_00711010);
  t3 = t1;
  if (t1 != 0) {
    t3 = 0x1C;
  }
  t4 = *(unsigned *)((char *)t2 + 0x10);
  t5 = t3;
  if (t1 == 0) {
    t5 = 0x1D;
  }
  t6 = t4 + 0x10;
  t7 = *(unsigned *)((char *)t6 + (t5 << 2));
  func_002C2C9C((unsigned)&lv[0], t7);
  *(unsigned char *)((char *)&lv[7]) = 1;
  t8 = *(unsigned *)((char *)&lv[6]);
  t9 = t8 | 1;
  *(unsigned *)((char *)&lv[6]) = t9;
  t10 = func_002C2D00((unsigned)&lv[0]);
  *(unsigned *)((char *)a0 + 4) = t10;
  func_002D42E8(a0);
  return;
}
