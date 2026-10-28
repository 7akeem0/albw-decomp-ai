/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern void func_004D8AEC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
extern void func_001512B4(unsigned, unsigned);
void func_003891FC(unsigned a0)
{
  unsigned t1, t8, t9;
  t1 = *(unsigned *)((char *)a0 + 0x478);
  ((BFlag *)(t1 + 0x164))->change(0x40000000, true);
  func_004D8AEC(t1 + 0x80, *(unsigned *)((char *)a0 + 0x3E8), a0 + 0x3D0);
  func_004CEAF0(*(unsigned *)((char *)a0 + 0x478));
  t8 = *(unsigned *)((char *)a0 + 0x47C);
  t9 = a0 + 0x3D0;
  func_001512B4(t8, t9);
  return;
}
