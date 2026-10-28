/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern void func_004F88A0(unsigned, unsigned, unsigned);
void func_002E4544(unsigned a0)
{
  unsigned h901, t2;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)(a0 + 0x800) + 0x104) = 0.10000000149011612f;
  t2 = *(unsigned *)((char *)a0 + 0x424);
  ((BFlag *)(t2 + 0x2C))->change(0x8000, true);
  h901 = *(unsigned *)((char *)a0 + 0x8C8) + 0x61;
  *(unsigned char *)((char *)h901) = 1;
  func_004F88A0(a0, *(unsigned *)((char *)a0 + 0x8F4), 1);
  return;
}
