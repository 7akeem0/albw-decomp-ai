typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070D7D0[];
extern char data_007142C8[];
extern unsigned func_0058D840(unsigned);
extern unsigned func_005826A4(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_00519E70(unsigned, unsigned);
extern void func_0051AE88(unsigned, unsigned);
unsigned func_0030A370(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned lv[4];
  unsigned k2, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9;
  k2 = 0;
  if (*(unsigned char *)((char *)a0 + 0xDC) == 0) goto L4;
  t7 = *(unsigned *)((char *)((unsigned)data_007142C8));
  if (t7 == 0) goto L9;
  t8 = func_0058D840(t7);
  t9 = t8;
  if (t8 != 0) {
    t9 = 1;
    *(unsigned char *)((char *)a0 + 0xDC) = k2;
  }
  if (t8 == 0) goto L9;
  return t9;
L4:;
  *(unsigned *)((char *)&lv[3]) = (-1);
  *(unsigned *)((char *)&lv[0]) = k2;
  *(unsigned *)((char *)&lv[1]) = k2;
  *(unsigned *)((char *)&lv[2]) = k2;
  t2 = *(unsigned *)((char *)data_0070D7D0);
  if (t2 == 0) goto L9;
  t3 = func_005826A4(t2, (unsigned)&lv[0], a1, a2);
  if (t3 == 0) goto L9;
  t4 = *(unsigned *)((char *)((unsigned)data_007142C8));
  if (t4 == 0) goto L8;
  func_00519E70(t4, (unsigned)&lv[0]);
  t5 = *(unsigned char *)((char *)a0 + 0x90);
  t6 = *(unsigned *)((char *)((unsigned)data_007142C8));
  func_0051AE88(t6, t5);
L8:;
  *(unsigned char *)((char *)a0 + 0xDC) = 1;
L9:;
  return 0;
}
