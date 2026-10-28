typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_003C8BB8(unsigned a0)
{
  unsigned t1, t3;
  t1 = a0;
  if (a0 == 0) {
    t1 = (-522172740);
  }
  if (a0 != 0) {
    t3 = *(unsigned *)((char *)*(unsigned *)((char *)t1) + 0x14);
    return ((unsigned (*)(unsigned, unsigned))t3)(t1, t3);
  }
  return t1;
}
