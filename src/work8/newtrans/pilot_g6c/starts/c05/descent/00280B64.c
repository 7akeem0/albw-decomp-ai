typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0034C8F0(unsigned, unsigned, unsigned);
extern unsigned func_006610B4(unsigned, unsigned);
unsigned func_00280B64(unsigned a0, unsigned a1)
{
  unsigned h901;
  if (*(unsigned char *)((char *)*(unsigned *)((char *)a1 + 0x2C) + 1) == 11u) {
    h901 = a0 + 0x41C;
    if (*(unsigned char *)((char *)h901) == 0) goto L3;
  }
  func_0034C8F0(*(unsigned *)((char *)a0 + 0x448), 0, a1);
  return 0;
  L3:;
  func_006610B4((a0 + 0x400) + 0x18, 1);
  return 0;
}
