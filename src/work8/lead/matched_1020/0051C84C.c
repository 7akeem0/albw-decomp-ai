typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00712468[];
extern void func_0010E3C4(unsigned, unsigned, unsigned);
extern unsigned func_00320CF8(unsigned);
void func_0051C84C(unsigned a0, unsigned a1)
{
  unsigned r0, r1, r4, r5, t9, t10;
  if (*(unsigned char *)((char *)*(unsigned *)((char *)data_00712468) + 0x25) != 0) {
    return;
  }
  r5 = (a0 + 0x100) + 0x36;
  func_0010E3C4(((a0 + 0x100) + 0x36), a1, 0x200);
  r4 = a0;
  r1 = 0;
  L2:;
  r0 = 0;
  do {
    if (*(unsigned char *)((char *)(r4 + r0) + 0x226) == r1) {
      r1 = r1 + 1;
      if ((int)r1 < 0x14) goto L2;
      goto L8;
    }
    r0 = r0 + 1;
  } while ((int)r0 < 0x14);
  func_00320CF8(r5);
  L8:;
  t9 = *(unsigned char *)((char *)r4 + 0x23A);
  if (t9 >= 5) {
    t10 = 4;
    *(unsigned char *)((char *)r4 + 0x23A) = t10;
  }
  return;
}
