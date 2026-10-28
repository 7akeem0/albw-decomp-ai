/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB0A4(unsigned, float);
extern void func_004FB4E0(unsigned, float);
void func_002BD070(unsigned a0)
{
  unsigned h901;
  ((BFlag *)(a0 + 0x59C))->change(1, true);
  ((BFlag *)(a0 + 0x59C))->change(0x300, true);
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  h901 = a0 + 0x2E;
  switch (*(short *)((char *)h901)) {
  case 0: goto L2;
  case 1: goto L2;
  case 2: goto L4;
  case 3: goto L4;
  case 4: goto L3;
  case 5: goto L3;
  case 6: goto L3;
  case 7: goto L4;
  case 8: goto L2;
  default: goto L1;
  }
  L1:;
  goto L4;
  L2:;
  func_004FABDC(a0, 1, 0, 0);
  goto L5;
  L3:;
  func_004FABDC(a0, 2, 0, 0);
  goto L5;
  L4:;
  func_004FABDC(a0, 0, 0, 0);
  L5:;
  func_004FB0A4(a0, (float)(int)(*(short *)((char *)a0 + 0x2E) << 1));
  func_004FB4E0(a0, 1.0f);
  return;
}
