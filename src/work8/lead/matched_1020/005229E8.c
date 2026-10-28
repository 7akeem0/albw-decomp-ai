typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_005229E8(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r0, t1, t2, t4, t5, t6;
  t1 = *(unsigned *)((char *)a0 + 4);
  t2 = *(unsigned *)((char *)a0 + 8);
  t4 = *(unsigned *)((char *)(t1 > a1 ? (t2 + (a1 << 2)) : t2));
  t5 = t2;
  if (t4 == 0) {
    t5 = (unsigned)"";
  }
  r0 = t5;
  if (t4 == 0) {
    return r0;
  }
  t6 = t5;
  if (t1 > a1) {
    t6 = t5 + (a1 << 2);
  }
  r0 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)t6)));
  return r0;
}
