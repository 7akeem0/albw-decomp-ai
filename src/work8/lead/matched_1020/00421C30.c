typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00532BA0(unsigned);
extern void func_002313DC(unsigned);
void func_00421C30(unsigned a0)
{
  unsigned k1, r0, t2, t3, t6, t7;
  if ((*(unsigned char *)((char *)a0 + 0x3D) & 1) == 0) {
    return;
  }
  t2 = *(unsigned char *)((char *)a0 + 0x3C);
  k1 = 0;
  if (t2 != 1) {
    if (t2 != 2) {
      return;
    }
    t6 = func_00532BA0(a0 + 0xC);
    if (t6 == 0) {
      return;
    }
    t7 = *(unsigned *)((char *)a0 + 0x24);
    *(unsigned char *)((char *)a0 + 0x3C) = k1;
    if (t7 == 0) goto L9;
    r0 = t7;
  } else {
    t3 = func_00532BA0(a0);
    if (t3 == 0) {
      return;
    }
    r0 = *(unsigned *)((char *)a0 + 0x20);
    *(unsigned char *)((char *)a0 + 0x3C) = k1;
    if (r0 == 0) goto L9;
  }
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)r0)))(r0);
  L9:;
  func_002313DC(*(unsigned *)((char *)a0 + 0x28));
  return;
}
