typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00689C48(void);
extern unsigned func_0010F1F8(unsigned, unsigned);
extern void func_0010F1DC(unsigned, unsigned);
extern unsigned func_0049F500(unsigned, unsigned, unsigned);
void func_002C2F88(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4;
  t3 = a0 + 0x10;
  t1 = a1 != 0 ? (a1 + 0x10) : 0;
  t2 = *(unsigned *)((char *)t1 + 0xC);
  t4 = a0;
  if (t2 != 0) {
    t4 = t1;
  }
  if (t2 == 0) goto L2;
  *(unsigned *)((char *)t4 + 0xC) = 0;
  func_0010F1F8(t4, 0);
  *(unsigned *)((char *)t2 + 8) = *(unsigned *)((char *)t2 + 8) + (-1);
L2:;
  *(unsigned *)((char *)t1 + 0xC) = t3;
  func_0010F1DC(t3, t1);
  *(unsigned *)((char *)t3 + 8) = *(unsigned *)((char *)t3 + 8) + 1;
  func_0049F500(a0 + 0x10, (-8), (unsigned)func_00689C48);
  return;
}
