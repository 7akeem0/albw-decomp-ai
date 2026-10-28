typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00232468(unsigned);
extern unsigned func_00569310(unsigned, unsigned);
extern  unsigned func_0045E340(unsigned, float, float, float);
void func_0045DBB0(unsigned a0)
{
  unsigned lv[3];
  unsigned t1;
  float x1, x2, x3, x4;
  func_00232468(a0);
  t1 = *(unsigned *)((char *)a0 + 0x154);
  func_00569310((unsigned)&lv[0], t1);
  x1 = *(float *)((char *)&lv[2]);
  x2 = *(float *)((char *)&lv[0]);
  x3 = x1 - x2;
  x4 = x3 + 24.0f;
  *(float *)((char *)a0 + 0x164) = x4;
  func_0045E340(a0, x4, 24.0f, x2);
  return;
}
