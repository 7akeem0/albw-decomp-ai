typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern float func_0051CF68(unsigned, float, float, float);
extern void func_00625B9C(unsigned);
void func_003108E4(unsigned a0)
{
  unsigned h901, t2, t3, t4, t5, t6, t7, t9;
  unsigned t16;
  float x1, x2, x3, x4, x5, x6;
  t2 = *(unsigned *)((char *)a0 + 0xAE4);
  t3 = (a0 + 0x800) + 0x2E4;
  t4 = t2 + 0xC;
  x1 = *(float *)((char *)t2);
  x2 = *(float *)((char *)t2 + 4);
  x3 = *(float *)((char *)t2 + 8);
  x4 = ((float (*)(unsigned, float, float, float))func_0051CF68)(t4, x1, x2, x3);
  *(float *)((char *)t2 + 0x10) = x4;
  t5 = *(unsigned *)((char *)t3);
  x5 = *(float *)((char *)a0 + 0x10);
  x6 = *(float *)((char *)t5 + 0x10);
  h901 = a0 + 8;
  t6 = *(unsigned *)((char *)h901);
  t7 = *(unsigned *)((char *)a0 + 0xC);
  *(float *)((char *)a0 + 0x3D8) = x5 + x6;
  if (*(unsigned *)((char *)t5 + 0xC) == 1065353216u) {
    t9 = a0 + 0x3D0;
    *(unsigned *)((char *)t9) = t6;
    *(unsigned *)((char *)t9 + 4) = t7;
    *(float *)((char *)a0 + 0x3D8) = x5;
    ((unsigned (*)(unsigned, unsigned, unsigned, float))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0xAC))(a0, 0, (-1), x5);
  }
  if (*(unsigned *)((char *)a0 + 0x960) == 140u) {
    if (*(unsigned char *)((char *)a0 + 0xAE8) == 0) {
      t16 = (*(unsigned *)((char *)data_007142C8) + 0x300) + 0x3E;
      *(unsigned short *)((char *)t16) = *(unsigned short *)((char *)t16) | 8;
    }
    *(unsigned char *)((char *)a0 + 0xAD4) = 1;
    func_00625B9C(a0);
    return;
  }
  return;
}
