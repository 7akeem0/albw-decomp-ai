/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern unsigned func_004FB070(float);
extern void func_004FACD4(unsigned, unsigned);
extern void func_004F88A0(unsigned, unsigned);
extern void func_004F9554(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB024(unsigned, unsigned);
void func_002E4858(unsigned a0)
{
  unsigned h901, t7, t11, t14;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  ((unsigned (*)(float))func_004FB070)(1.0f);
  func_004FACD4(a0, 0);
  ((BFlag *)(a0 + 0x59C))->change(4, false);
  ((BFlag *)(a0 + 0x59C))->change(0x300, false);
  h901 = *(unsigned *)((char *)a0 + 0x8C4) + 0x44;
  *(unsigned char *)((char *)h901) = 1;
  func_004F88A0(a0, *(unsigned *)((char *)a0 + 0x8F0));
  t7 = a0 + 0x430;
  *(unsigned char *)((char *)a0 + 0x768) = *(unsigned char *)((char *)a0 + 0x768) & (-2);
  func_004F9554(*(unsigned *)((char *)a0 + 0x430), 9, 0, 1);
  func_004F9554(*(unsigned *)((char *)a0 + 0x434), 9, 0, 1);
  t11 = *(unsigned *)((char *)t7);
  t14 = (*(unsigned *)((char *)t11 + 0x2C) & (-1793)) | 0x500;
  *(unsigned *)((char *)t11 + 0x2C) = t14;
  func_004FB024(a0, t14);
  return;
}
