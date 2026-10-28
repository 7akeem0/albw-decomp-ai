typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006A0348[];
extern char ro_006A0352[];
extern char data_0070ED08[];
extern  void func_00652E10(unsigned, unsigned, unsigned, unsigned, unsigned);
void func_00312714(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned t1, t2, t3, t4;
  t1 = *(signed char *)((char *)a0 + 0xA37);
  t2 = *(unsigned char *)((char *)a0 + 0x9D0);
  t3 = t1 != 0 ? (unsigned)ro_006A0348 : (unsigned)ro_006A0352;
  t4 = *(unsigned char *)((char *)t3 + t2);
  func_00652E10(a0, a1, t4, (unsigned)data_0070ED08, t1);
  return;
}
