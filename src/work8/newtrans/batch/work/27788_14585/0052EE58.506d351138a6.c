typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
unsigned func_0052EE58(void)
{
  unsigned r0, t1, t2, t3, t5;
  t1 = *(unsigned *)((char *)data_00709DF8);
  t2 = *(unsigned *)((char *)t1 + 0x18);
  t3 = *(unsigned *)((char *)t1 + 0x1C);
  if (((unsigned)(signed char)t2) != 47u || (t3 != 3)) {
    t5 = (unsigned)(signed char)t2;
    r0 = t5;
    if ((t5 != 1) || (t3 != 37u)) {
      r0 = 0;
    }
    if ((t5 != 1) || (t3 != 37u)) {
      return r0;
    }
  }
  r0 = 1;
  return r0;
}
