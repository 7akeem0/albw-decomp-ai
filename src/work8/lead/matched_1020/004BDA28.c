typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00583B1C(unsigned);
extern unsigned func_004C0600(unsigned, unsigned);
extern void func_004C0550(unsigned, unsigned);
extern void func_004C0D70(unsigned, unsigned);
void func_004BDA28(unsigned a0)
{
  unsigned k1, t3, t4, t5, t6, t7, t9, t14;
  unsigned t15;
  if (*(unsigned char *)((char *)a0 + 0x85F) != 0) {
    return;
  }
  if ((*(unsigned *)((char *)a0 + 0x8AC) & 0x8000) != 0) {
    return;
  }
  t3 = a0 + 0x900;
  t4 = *(short *)((char *)t3 + 4);
  if ((t4 + 1) == 0) {
    t5 = *(short *)((char *)t3 + 0xA);
  }
  if (!((t4 + 1) == 0 && (t5 + 1) == 0)) { } else {
    return;
  }
  t6 = func_00583B1C(a0);
  if (t6 == 0) {
    return;
  }
  t7 = *(short *)((char *)t3 + 0xA);
  k1 = (-1);
  if ((t7 + 1) != 0) {
    if ((*(short *)((char *)t3 + 4) + 1) != 0) {
      t9 = func_004C0600(a0, t7);
      if (t9 != 0) {
        func_004C0550(a0, *(short *)((char *)t3 + 0xC));
        func_004C0D70(a0, *(short *)((char *)t3 + 0xE));
      }
      if ((*(short *)((char *)t3 + 0xA) + 1) != 0) goto L12;
    } else {
      *(short *)((char *)t3 + 0xA) = k1;
      *(short *)((char *)t3 + 0xC) = k1;
      *(short *)((char *)t3 + 0xE) = k1;
    }
  }
  t14 = *(unsigned char *)((char *)a0 + 0x855);
  t15 = *(unsigned *)((char *)*(unsigned *)((char *)a0) + 0xAC);
  ((unsigned (*)(unsigned, unsigned, unsigned))t15)(a0, t14, (-1));
  L12:;
  if ((*(short *)((char *)t3 + 4) + 1) == 0) {
    return;
  }
  *(short *)((char *)t3 + 4) = k1;
  *(short *)((char *)t3 + 6) = k1;
  *(short *)((char *)t3 + 8) = k1;
  return;
}
