typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00712F70[];
extern unsigned func_0049840C(unsigned, float, float, float, float);
extern unsigned func_0057D258(unsigned);
extern unsigned func_00493EE0(unsigned, unsigned, unsigned);
void func_0026EBF8(unsigned a0)
{
  unsigned t2;
  float x4;
  t2 = *(unsigned *)((char *)*(unsigned *)((char *)data_00712F70) + 0x1B4);
  x4 = (*(float *)((char *)t2 + 0xC)) - (*(float *)((char *)t2 + 4));
  ((unsigned (*)(unsigned, float, float, float, float))func_0049840C)((a0 + 0x68), 1.0f, 1000.0f, 0.7853981852531433f, x4 / ((*(float *)((char *)t2 + 0x10)) - (*(float *)((char *)t2 + 8))));
  func_00493EE0(a0 + 0x1F4, func_0057D258(a0 + 0x68), 0);
  return;
}
