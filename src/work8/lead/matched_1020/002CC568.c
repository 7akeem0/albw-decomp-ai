typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_002CBFF4(unsigned, unsigned, unsigned, float, float);
void func_002CC568(unsigned a0)
{
  unsigned h901, h902, t4;
  *(unsigned char *)((char *)a0 + 0x853) = 3;
  h901 = *(unsigned *)((char *)a0) + 0xAC;
  ((unsigned (*)(unsigned, unsigned, unsigned))*(unsigned *)((char *)h901))(a0, 3, (-1));
  t4 = (a0 + 0xC00) + 0x1A8;
  *(float *)((char *)t4) = 0.0f;
  *(float *)((char *)t4 + 4) = 0.0f;
  *(float *)((char *)t4 + 8) = 0.0f;
  h902 = a0 + 0xDB4;
  *(unsigned *)((char *)h902) = 0;
  *(float *)((char *)t4 + 0x10) = 0.0f;
  ((unsigned (*)(unsigned, unsigned, unsigned, float, float))func_002CBFF4)(a0, 0, t4, 0.0f, 0.02500000037252903f);
  return;
}
