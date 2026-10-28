/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



unsigned func_002B9250(unsigned a0, unsigned a1)
{
  if (a1 == 1) {
    return 0;
  }
  if ((a1 == 21u) && ((*(float *)((char *)a0 + 0xC)) + 0.5f) < (*(float *)((char *)a0 + 0x3D4))) {
    return 0;
  }
  ((BFlag *)(a0 + 0x5A0))->change(0x80, true);
  return a1;
}
