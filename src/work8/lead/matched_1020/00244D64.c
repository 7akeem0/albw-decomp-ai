typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006A69B8[];
extern char data_00711DE8[];
extern char data_007142C8[];
extern void func_0051ABC8(unsigned, unsigned);
extern unsigned func_004C3E44(unsigned, unsigned, unsigned);
extern unsigned func_0051AE40(unsigned);
extern unsigned func_0058D8F0(unsigned);
unsigned func_00244D64(unsigned a0)
{
  unsigned r0, t1, t4, t5, t6, t9, t10, t11;
  t1 = *(unsigned *)((char *)data_00711DE8);
  if (t1 == 0) goto L15;
  t4 = (a0 + 0x800) + 0x1C8;
  t5 = *(unsigned *)((char *)data_007142C8);
  switch (*(unsigned *)((char *)a0 + 0x9C8)) {
  case 0: goto L3;
  case 1: goto L5;
  case 2: goto L7;
  case 3: goto L9;
  case 4: goto L11;
  default: goto L2;
  }
L2:;
  goto L13;
L3:;
  if (t5 == 0) goto L6;
  func_0051ABC8(t5, *(unsigned char *)((char *)ro_006A69B8));
  goto L6;
L5:;
  t11 = func_004C3E44(t1, 7, t1);
  if (t11 == 0) goto L13;
L6:;
  *(unsigned *)((char *)t4) = *(unsigned *)((char *)a0 + 0x9C8) + 1;
  goto L13;
L7:;
  t9 = *(unsigned *)((char *)t1 + 0x9C0);
  t10 = t9;
  if (t9 <= 1) {
    t10 = 3;
  }
  if (t9 > 1) goto L13;
  r0 = t10;
  goto L10;
L9:;
  if (t5 != 0) {
    func_0051AE40(t5);
  }
  r0 = *(unsigned *)((char *)a0 + 0x9C8) + 1;
L10:;
  *(unsigned *)((char *)t4) = r0;
  goto L13;
L11:;
  if (t5 == 0) goto L15;
  t6 = func_0058D8F0(t5);
  if (t6 == 0) goto L14;
L13:;
  return 0;
L14:;
  *(unsigned *)((char *)a0 + 0x9C8) = 0;
  return 1;
L15:;
  return 1;
}
