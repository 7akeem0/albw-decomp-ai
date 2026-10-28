typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00582A60(unsigned, unsigned, unsigned, unsigned);
void func_00582A4C(unsigned a0, unsigned a1)
{
  func_00582A60(a1, a0 + 0xC, *(unsigned *)((char *)a0 + 0x18), a1);
  return;
}
