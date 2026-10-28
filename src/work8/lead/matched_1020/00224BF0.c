typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709D28[];
extern void func_0036BA20(unsigned);
extern void func_004A7F00(unsigned, unsigned, unsigned);
void func_00224BF0(unsigned a0)
{
  unsigned t1, t2, t7, t8;
  float x1;
  t1 = a0 + 0x400;
  *(float *)((char *)t1 + 0x300) = 0.0f;
  t2 = *(unsigned char *)((char *)a0 + 0x73D);
  x1 = 0.0f;
  if (t2 == 2) {
    x1 = 0.14000000059604645f;
    *(float *)((char *)t1 + 0x2FC) = x1;
  }
  if (t2 != 2) {
    *(float *)((char *)t1 + 0x2FC) = t2 == 1 ? 0.10000000149011612f : 0.05999999865889549f;
  }
  func_0036BA20((a0 + 0x400) + 0x8C);
  if (*(unsigned char *)((char *)a0 + 0x73C) == 0) {
    return;
  }
  if (*(unsigned char *)((char *)a0 + 0x754) != 0) {
    return;
  }
  t7 = *(unsigned *)((char *)a0 + 0x618);
  t8 = *(unsigned *)((char *)data_00709D28);
  func_004A7F00(t8, t7, 3);
  *(unsigned char *)((char *)a0 + 0x754) = 1;
  return;
}
