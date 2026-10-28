typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern char data_0070D858[];
extern void func_0017222C(unsigned, unsigned, unsigned, unsigned);
void func_001723A0(unsigned a0)
{
  unsigned t2, t3, t4, t6, ka3;
  t2 = *(unsigned *)((char *)(unsigned)data_0070D858 + 0x10);
  t3 = *(signed char *)((char *)*(unsigned *)((char *)data_00709DF8) + 0x18);
  if (t3 == 10u) goto L7;
  if ((int)t3 > 0xA) goto L5;
  if ((t3 == 0) || (t3 == 2)) goto L7;
  if ((t3 == 4) || (t3 == 9)) goto L7;
L4:;
  ka3 = (unsigned)data_0070D858 + 0x18;
  t6 = *(unsigned *)((char *)ka3);
  *(unsigned *)((char *)a0 + 0x2F0) = t6;
  func_0017222C(a0, 2, t6 + t2, 0);
  return;
L5:;
  if ((t3 == 11u) || (t3 == 12u)) goto L7;
  if ((t3 != 18u) && (t3 != 22u)) goto L4;
L7:;
  t4 = *(unsigned *)((char *)(unsigned)data_0070D858 + 0x14);
  *(unsigned *)((char *)a0 + 0x2F0) = t4;
  func_0017222C(a0, 1, t4 + t2, 0);
  return;
}
