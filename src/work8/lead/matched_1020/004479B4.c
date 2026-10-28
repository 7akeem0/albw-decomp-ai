typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern void func_0051B5C4(unsigned);
extern unsigned func_00447C28(unsigned);
extern unsigned func_0044A198(unsigned);
extern unsigned func_0044AA80(unsigned);
extern unsigned func_00447A40(unsigned);
extern unsigned func_004483A8(unsigned);
void func_004479B4(unsigned a0)
{
  unsigned t2, t3;
  t2 = a0 + 0x200;
  t3 = *(signed char *)((char *)(a0 + 0x100) + 0x5C);
  if (t3 == 2) goto L3;
  if (t3 == 0) goto L7;
  func_0051B5C4(*(unsigned *)((char *)data_007142C8));
  return;
L3:;
  func_00447C28(a0);
  if (*(unsigned char *)((char *)t2 + 8) == 0) goto L5;
L4:;
  func_0044A198(a0);
  goto L6;
L5:;
  func_0044AA80(a0);
L6:;
  func_00447A40(a0);
  return;
L7:;
  func_004483A8(a0);
  if (*(unsigned char *)((char *)t2 + 8) == 0) goto L5;
  goto L4;
}
