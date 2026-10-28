typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070B728[];
extern unsigned func_00165E28(unsigned, unsigned);
extern void func_00588C14(unsigned, unsigned, unsigned);
static unsigned arrAt_C_14(unsigned a, int i) { return (unsigned)i < *(unsigned *)(a + 0xC) ? *(unsigned *)(a + 0x14) + i * 4 : *(unsigned *)(a + 0x14); }
void func_00135698(unsigned a0)
{
  unsigned k1, t1, t2, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11, t12;
  float x1, x2, x3, x4;
  t1 = *(unsigned char *)((char *)a0 + 0x604);
  if (t1 != 5) {
    return;
  }
  t2 = *(unsigned *)((char *)a0 + 0x4F4);
  t4 = arrAt_C_14(t2, 0);
  t5 = *(unsigned char *)((char *)t4 + 0x1C);
  if (t5 != 0) {
    return;
  }
  x1 = *(float *)((char *)t4 + 0x10);
  if (x1 >= 0.0f) {
    x3 = *(float *)((char *)t4 + 8);
    x4 = *(float *)((char *)t4 + 0x14);
    if (x3 == x4) goto L6;
    return;
  }
  x2 = *(float *)((char *)t4 + 8);
  if (!(!(x2 <= 0.0f))) { } else {
    return;
  }
  L6:;
  k1 = (unsigned)data_0070B728;
  t6 = a0 + 0x400;
  t7 = t6 + 0xFC;
  t8 = *(unsigned *)((char *)k1);
  t9 = *(unsigned *)((char *)t8 + 0x44);
  if (t9 != 0) {
    if (t9 == t7) {
      t10 = *(unsigned char *)((char *)a0 + 0x5F4);
      if (t10 == 0) {
        func_00165E28(t7, 0x3C);
        func_00588C14(a0, 1, 1);
      }
    }
  }
  t11 = *(unsigned *)((char *)k1);
  t12 = *(unsigned *)((char *)t11 + 0x44);
  if (t12 != 0) {
    if (t12 == t7) {
      return;
    }
  }
  *(unsigned char *)((char *)a0 + 0x2D7) = 1;
  return;
}
