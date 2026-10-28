typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003C8BB8(unsigned, unsigned);
void func_003C8BA4(unsigned a0)
{
  unsigned t2;
  t2 = *(unsigned *)((char *)a0) & (-2);
  *(unsigned *)((char *)a0) = t2;
  func_003C8BB8(t2 & (-2), t2);
  return;
}
