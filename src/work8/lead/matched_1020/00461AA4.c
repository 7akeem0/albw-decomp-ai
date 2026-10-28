typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00231448(unsigned);
extern unsigned func_002317C0(unsigned, float, unsigned, unsigned);
extern void func_004B989C(unsigned);
extern void func_0012C790(unsigned);
void func_00461AA4(unsigned a0)
{
  unsigned h901, k1, t2, t3;
  k1 = 0;
  *(unsigned char *)((char *)a0 + 0x98) = k1;
  func_00231448(a0 + 0x38);
  t2 = *(unsigned *)((char *)a0 + 0x1C);
  t3 = a0 + 0x38;
  h901 = a0 + 0x40;
  *(unsigned *)((char *)h901) = t2;
  *(unsigned short *)((char *)a0 + 0x3A) = 7;
  *(unsigned short *)((char *)a0 + 0x38) = k1;
  ((unsigned (*)(unsigned, float, unsigned, unsigned))func_002317C0)(t3, 1.0f, 7, t2);
  *(unsigned char *)((char *)a0 + 0xF) = 0x78;
  func_004B989C(*(unsigned *)((char *)a0 + 0x10));
  func_0012C790(*(unsigned *)((char *)a0 + 0x138));
  return;
}
