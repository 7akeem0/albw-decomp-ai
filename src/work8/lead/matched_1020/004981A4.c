typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0010F1F8(unsigned, unsigned);
extern void func_0010F1DC(unsigned, unsigned);
extern void func_0010E3C4(unsigned, unsigned, unsigned);
void func_004981A4(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t13, t14;
  t1 = *(unsigned *)((char *)a0 + 0x140);
  if (t1 != 0) {
    t2 = *(unsigned *)((char *)t1 + 0x158);
    t3 = t2 + a0;
    func_0010F1F8(t3, t2);
    t4 = *(unsigned *)((char *)t1 + 0x154);
    t5 = t4 + (-1);
    *(unsigned *)((char *)t1 + 0x154) = t5;
    *(unsigned *)((char *)a0 + 0x140) = 0;
  }
  t6 = *(unsigned *)((char *)a1 + 0x158);
  t7 = a1 + 0x14C;
  t8 = t6 + a0;
  func_0010F1DC(t7, t8);
  t9 = *(unsigned *)((char *)t7 + 8);
  t10 = t9 + 1;
  *(unsigned *)((char *)t7 + 8) = t10;
  *(unsigned *)((char *)a0 + 0x140) = a1;
  if (a2 != 0) {
    func_0010E3C4((a0 + 0xB8), (a1 + 0xAC), 0x20);
    t13 = a1 + 0xCC;
    t14 = a0 + 0xD8;
    func_0010E3C4(t14, t13, 0x20);
    return;
  }
  return;
}
