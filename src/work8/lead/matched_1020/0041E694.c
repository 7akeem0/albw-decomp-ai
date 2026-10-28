typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_0041E694(unsigned a0, float fa0, float fa1)
{
  unsigned h901, t1, t4, t5, t8;
  float h902, x2, x3;
  t1 = *(unsigned *)((char *)a0 + 0x24);
  t4 = ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t1) + 0xC))(t1);
  h901 = a0;
  t5 = *(unsigned *)((char *)h901 + 0x24);
  x2 = (float)(int)t4;
  x3 = fa0 / x2;
  t8 = ((unsigned (*)(unsigned, float))*(unsigned *)((char *)*(unsigned *)((char *)t5) + 0x10))(t5, x2);
  *(float *)((char *)a0 + 8) = x3;
  h902 = fa1 / ((float)(int)t8);
  *(float *)((char *)a0 + 0xC) = h902;
  return;
}
