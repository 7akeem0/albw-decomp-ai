typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_00276E6C(unsigned a0, unsigned a1)
{
  unsigned r0, r1, r2, t2, t4, t5, t7;
  r2 = *(unsigned *)((char *)a0 + 0x638);
  t2 = *(unsigned *)((char *)a0 + 0x630);
  r0 = r2 + (t2 << 2);
  r1 = a1;
  if (r2 != r0) {
    do {
      t4 = *(unsigned *)((char *)r2);
      t5 = *(unsigned *)((char *)t4);
      if (t5 == r1) {
        t7 = *(unsigned *)((char *)r2);
        return t7;
      }
      r2 = r2 + 4;
    } while (r2 != r0);
  }
  return 0;
}
