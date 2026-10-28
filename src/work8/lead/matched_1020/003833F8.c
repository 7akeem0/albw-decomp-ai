typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003AB994(unsigned, unsigned);
extern unsigned func_003AB8DC(unsigned, unsigned);
extern unsigned func_001151EC(unsigned, unsigned, unsigned);
extern void func_004CEAF0(unsigned);
void func_003833F8(unsigned a0, unsigned a1)
{
  unsigned h901, t6, t10, t12;
  func_003AB994(a0, *(unsigned char *)((char *)a0 + 0x3C) == 1 ? *(unsigned *)((char *)a0 + 0x38) : *(unsigned *)((char *)a0 + 0x34));
  func_003AB8DC(a0, *(unsigned char *)((char *)a0 + 0x3C) == 1 ? *(unsigned *)((char *)a0 + 0x38) : *(unsigned *)((char *)a0 + 0x34));
  t6 = *(unsigned char *)((char *)a0 + 0x3C) == 1 ? *(unsigned *)((char *)a0 + 0x38) : *(unsigned *)((char *)a0 + 0x34);
  *(unsigned *)((char *)t6 + 0x164) = *(unsigned *)((char *)t6 + 0x164) | 0x40000000;
  t10 = *(unsigned *)((char *)a0 + 4);
  t12 = *(unsigned *)((char *)t10 + 0x8F4);
  h901 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)t10 + 0x8D4) + 0x24) + 0x14) + ((t12 + (t12 << 1)) << 4);
  func_001151EC(t6 + 0x80, h901, t6 + 0x80);
  func_004CEAF0(t6);
  return;
}
