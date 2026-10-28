typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_002C11E8(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_0016898C(unsigned, unsigned, unsigned);
static unsigned arrAt_C_14(unsigned a, int i) { return (unsigned)i < *(unsigned *)(a + 0xC) ? *(unsigned *)(a + 0x14) + i * 4 : *(unsigned *)(a + 0x14); }
void func_0035B10C(unsigned a0)
{
  unsigned lv[23];
  unsigned t1, t2, t4, t5, t7, t8;
  unsigned t9, t10, t11, t12, t13, t15;
  t1 = *(unsigned *)((char *)a0 + 0x430);
  func_004CF478(t1, 1, 0);
  t2 = *(unsigned *)((char *)a0 + 0x434);
  t4 = arrAt_C_14(t2, 0);
  *(float *)((char *)t4 + 0x10) = 1.0f;
  t5 = *(unsigned *)((char *)a0 + 0x438);
  t7 = arrAt_C_14(t5, 0);
  *(float *)((char *)t7 + 0x10) = 1.0f;
  t8 = *(unsigned char *)((char *)a0 + 0x440);
  t9 = func_002C11E8((unsigned)&lv[0], t8, 0xA, 0);
  t10 = *(unsigned *)((char *)a0 + 0x43C);
  t11 = a0 + 0x400;
  t12 = t11 + 0x3C;
  func_0016898C(t10, t9, t10);
  t13 = *(unsigned *)((char *)t12);
  t15 = arrAt_C_14(t13, 0);
  *(float *)((char *)t15 + 0x10) = 1.0f;
  return;
}
