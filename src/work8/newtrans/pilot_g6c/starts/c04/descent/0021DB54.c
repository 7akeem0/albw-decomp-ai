typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070C8E0[];
extern unsigned func_00588BF0(unsigned, unsigned);
extern float func_002760A4(unsigned, unsigned, unsigned);
extern float func_004F898C(void);
extern unsigned func_0065E254(unsigned, unsigned, float, float);
unsigned func_0021DB54(unsigned a0)
{
  unsigned r0, t1, t5, t6;
  float h901, x1, x2, x4;
  t1 = func_00588BF0(a0, 0);
  r0 = t1;
  if (t1 != 0) {
    x1 = func_002760A4(*(unsigned *)((char *)data_0070C8E0), a0 + 0x3D0, (-1));
    x2 = func_004F898C();
    h901 = x1;
    x4 = (*(float *)((char *)a0 + 0x3D4)) - h901;
    t5 = (a0 + 0x800) + 0xBC;
    t6 = x2 > x4 ? 3 : 0;
    ((unsigned (*)(unsigned, unsigned, float, float))func_0065E254)(t5, t6, x2, x4);
    r0 = *(unsigned *)((char *)a0 + 0x59C) | 0xB7;
    *(unsigned *)((char *)a0 + 0x59C) = r0;
  }
  return r0;
}
