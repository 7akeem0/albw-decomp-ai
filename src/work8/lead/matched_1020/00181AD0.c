typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00659400(unsigned, unsigned);
unsigned func_00181AD0(unsigned a0, unsigned a1)
{
  unsigned r0, t8, t9;
  r0 = *(unsigned *)((char *)((a0 + 0x800) + 0x1D4));
  if (*(unsigned *)((char *)((a0 + 0x800) + 0x1D4) + 4) <= r0) {
    if (*(unsigned char *)((char *)a0 + 0x964) != 8) {
      func_00659400(a0 + 0x960, 8);
    }
    r0 = (a0 + 0x800) + 0x27C;
    t8 = *(unsigned *)((char *)a1 + 4);
    t9 = *(unsigned *)((char *)a1 + 8);
    *(unsigned *)((char *)r0) = *(unsigned *)((char *)a1);
    *(unsigned *)((char *)r0 + 4) = t8;
    *(unsigned *)((char *)r0 + 8) = t9;
  }
  return r0;
}
