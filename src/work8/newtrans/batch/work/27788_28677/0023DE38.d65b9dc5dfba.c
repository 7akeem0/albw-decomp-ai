typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709F30[];
extern unsigned func_0065F050(unsigned, unsigned);
extern unsigned func_004541D8(unsigned);
unsigned func_0023DE38(unsigned a0, unsigned a1)
{
  unsigned r1, t3, t4, t6, t8, t9;
  if (a1 == 0) goto L2;
  if (!(a1 == 1)) { } else {
    *(unsigned char *)((char *)a0 + 0x7D0) = a1;
  }
  goto L8;
L2:;
  t3 = a0 + 0x700;
  t4 = (a0 + 0x400) + 0x388;
  if (*(unsigned char *)((char *)a0 + 0x7D0) == 0) goto L5;
  r1 = t3;
  if (*(unsigned char *)((char *)t3 + 0x8C) == 4) goto L7;
  func_0065F050(t4, 4);
  goto L7;
L5:;
  r1 = *(unsigned char *)((char *)t3 + 0x8C);
  if (r1 == 2) goto L7;
  t6 = *(unsigned *)((char *)a0 + 0x7D4);
  if (t6 != 0) {
    func_004541D8(t6);
  }
  func_0065F050(t4, 2);
L7:;
  t8 = *(unsigned *)((char *)data_00709F30);
  if (t8 != 0) {
    t9 = 0;
    *(unsigned *)((char *)t8 + 0x51C) = t9;
  }
L8:;
  return 1;
}
