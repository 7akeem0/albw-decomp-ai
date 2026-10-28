typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004F87F8(unsigned, unsigned);
extern void func_00163A30(unsigned, unsigned);
void func_0016392C(unsigned a0)
{
  unsigned t1, t2;
  t1 = a0 + 0x400;
  t2 = t1 + 0xE4;
  *(float *)((char *)t2) = 0.800000011920929f;
  *(float *)((char *)t2 + 4) = 0.800000011920929f;
  *(float *)((char *)t2 + 8) = 0.800000011920929f;
  func_004FABDC(a0, 1, 0, 0);
  func_004F87F8(a0, 0);
  *(unsigned char *)((char *)a0 + 0x920) = 1;
  func_00163A30(a0, 0);
  return;
}
