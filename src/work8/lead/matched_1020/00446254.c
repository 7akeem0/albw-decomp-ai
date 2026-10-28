typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern void func_00232468(unsigned);
extern void func_0051B5C4(unsigned);
extern unsigned func_004B9660(unsigned, unsigned);
extern void func_002C00A8(unsigned);
extern unsigned func_00447C28(unsigned);
extern unsigned func_004483A8(unsigned);
extern unsigned func_0044A198(unsigned);
extern unsigned func_0044AA80(unsigned);
void func_00446254(unsigned a0)
{
  unsigned t1, t2, t6, t7;
  func_00232468(a0);
  t1 = a0 + 0x200;
  t2 = *(signed char *)((char *)a0 + 0x15C);
  if (t2 == 2) goto L4;
  if (t2 == 0) goto L6;
  func_0051B5C4(*(unsigned *)((char *)data_007142C8));
L3:;
  t6 = *(unsigned *)((char *)a0 + 0x10);
  t7 = *(unsigned *)((char *)a0 + 0x230);
  func_004B9660(t6, t7);
  func_002C00A8(*(unsigned *)((char *)a0 + 0x230));
  func_002C00A8(*(unsigned *)((char *)a0 + 0x14));
  return;
L4:;
  func_00447C28(a0);
  if (*(unsigned char *)((char *)t1 + 8) != 0) goto L7;
  goto L8;
L6:;
  func_004483A8(a0);
  if (*(unsigned char *)((char *)t1 + 8) == 0) goto L8;
L7:;
  func_0044A198(a0);
  goto L3;
L8:;
  func_0044AA80(a0);
  goto L3;
}
