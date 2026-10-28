typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_005234B8(unsigned a0, unsigned a1)
{
  unsigned h901, h902, k1, t3;
  k1 = 1;
  if (a1 == 7) {
    t3 = *(unsigned short *)((char *)*(unsigned *)((char *)a0 + 0x90) + 4);
    h901 = *(unsigned *)((char *)a0 + 0x8C) + 0x28;
    h902 = k1 << (t3 & 7);
    if ((*(unsigned char *)((char *)*(unsigned *)((char *)h901) + (t3 >> 3)) & h902) != 0) {
      return 1;
    }
  }
  if ((*(unsigned char *)((char *)a0 + 0x9C) != 0) && (*(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x8C) + 0x168) & (k1 << a1)) != 0) {
    return 1;
  }
  return 0;
}
