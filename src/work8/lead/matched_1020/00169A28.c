typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_00169A28(unsigned a0)
{
  unsigned h901;
  *(unsigned *)((char *)a0) = 0;
  h901 = a0 + 4;
  *(unsigned *)((char *)h901) = 0;
  *(unsigned *)((char *)a0 + 8) = 0;
  *(unsigned *)((char *)a0 + 0xC) = 0;
  return;
}
