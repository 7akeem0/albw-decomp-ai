typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_004F88A0(unsigned, unsigned);
extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_002BD27C(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5, t6;
  t1 = *(unsigned *)((char *)a0 + 0x3A4);
  func_004F88A0(a0, t1);
  *(unsigned char *)((char *)a0 + 0x95C) = 0;
  func_004FABDC(a0, 9, (-1), 0);
  t2 = *(unsigned *)((char *)data_0070FB60);
  t3 = *(unsigned *)((char *)t2 + 0x1C);
  t4 = *(unsigned *)((char *)t3);
  *(unsigned *)((char *)a0 + 0x920) = t4;
  t5 = *(unsigned *)((char *)t3 + 4);
  *(unsigned *)((char *)a0 + 0x924) = t5;
  t6 = *(unsigned *)((char *)t3 + 8);
  *(unsigned *)((char *)a0 + 0x928) = t6;
  return;
}
