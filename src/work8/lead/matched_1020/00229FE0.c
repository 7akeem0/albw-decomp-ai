typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00708998[];
extern unsigned func_001E8440(unsigned, unsigned, unsigned, float, float, float);
extern void func_004F68AC(unsigned, unsigned);
void func_00229FE0(unsigned a0, unsigned a1)
{
  float x1, x2, x3;
  if ((*(unsigned *)((char *)a0 + 0x59C) & 1) != 0) {
    x1 = *(float *)((char *)a0 + 0x3D0);
    x2 = *(float *)((char *)a0 + 0xC);
    x3 = *(float *)((char *)a0 + 0x3D8);
    {
      unsigned lv[3];
      *(float *)((char *)&lv[0]) = x1;
      *(float *)((char *)&lv[1]) = x2;
      *(float *)((char *)&lv[2]) = x3;
      ((unsigned (*)(unsigned, unsigned, unsigned, float, float, float))func_001E8440)(*(unsigned *)((char *)*(unsigned *)((char *)data_00708998) + 0x18), (unsigned)&lv[0], 1, x1, x2, x3);
    }
  }
  func_004F68AC(a0, a1);
  return;
}
