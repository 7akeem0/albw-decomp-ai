/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern void func_002AE780(unsigned);
extern void func_004FC78C(unsigned, unsigned);
extern void func_002ADFE4(unsigned, unsigned, unsigned, unsigned, unsigned);
extern void func_004FB2F0(unsigned, unsigned);
void func_004FB274(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned lv[1];
  unsigned t1, t6, t9, t11;
  *(unsigned *)((char *)&lv[0]) = a3;
  func_002AE780(a0);
  t1 = *(unsigned *)((char *)a0 + 0x34);
  *(unsigned *)((char *)t1 + 0x59C) = *(unsigned *)((char *)t1 + 0x59C) & (-13);
  func_004FC78C(*(unsigned *)((char *)a0 + 0x34), 0);
  *(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x34) + 0x4DC) = 5;
  t6 = *(unsigned *)((char *)a0 + 0x34);
  ((BFlag *)(t6 + 0x5A0))->change(0x800, true);
  func_002ADFE4(a0, 0x1F, 0x1F, 0, 0);
  t9 = *(unsigned *)((char *)a0 + 0x34);
  t11 = *(unsigned *)((char *)t9 + 0x5A0) & (-2049);
  *(unsigned *)((char *)t9 + 0x5A0) = t11;
  func_004FB2F0(*(unsigned *)((char *)a0 + 0x34), t11);
  return;
}
