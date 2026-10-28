typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0058ACC8();
extern unsigned func_00549010(unsigned);
extern unsigned func_004E2880(unsigned, unsigned, unsigned, unsigned, float, float);
extern unsigned func_0058A8F0(unsigned);
extern unsigned func_0065AD50(unsigned, unsigned);
unsigned func_001AE2F4(unsigned a0)
{
  unsigned lv[4];
  unsigned r0, t1, t2, t3, t7, t10, t15;
  t1 = ((unsigned (*)(float))func_0058ACC8)(16.0f);
  if (t1 != 0) {
    t10 = func_00549010(a0);
    *(unsigned *)((char *)&lv[1]) = *(unsigned *)((char *)t10 + 0xC);
    *(unsigned *)((char *)&lv[2]) = *(unsigned *)((char *)t10 + 0x1C);
    *(unsigned *)((char *)&lv[3]) = *(unsigned *)((char *)t10 + 0x2C);
    *(float *)((char *)&lv[2]) = (*(float *)((char *)a0 + 0x3D4)) + 0.800000011920929f;
    t15 = *(unsigned *)((char *)a0 + 0x2CC);
    *(unsigned *)((char *)&lv[0]) = (unsigned)(short)*(unsigned *)((char *)a0 + 0x9D0);
    ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_004E2880)((unsigned)&lv[1], *(unsigned *)((char *)a0 + 0x3E8), 1, t15, 0.15000000596046448f, 0.800000011920929f);
    *(unsigned char *)((char *)a0 + 0x9E0) = 0;
    r0 = 0;
    return r0;
  }
  t2 = ((unsigned (*)(unsigned, float))func_0058ACC8)(a0, 62.0f);
  if (t2 != 0) {
    t7 = a0 + 0x800;
    *(unsigned char *)((char *)a0 + 0x9E0) = 1;
    *(float *)((char *)t7 + 0x1D8) = 0.0f;
    *(unsigned *)((char *)a0 + 0x9DC) = *(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x994) + 8);
    return t7;
  }
  t3 = func_0058A8F0(a0);
  r0 = t3;
  if (t3 == 0) {
    return r0;
  }
  return func_0065AD50((a0 + 0x800) + 0x10C, 9);
}
