typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
float func_00521238(unsigned a0, float fa0, float fa1, float fa2, float fa3, float fa4, float fa5)
{
  unsigned t2;
  float h901, x7, x8, x9;
  t2 = *(unsigned *)((char *)*(unsigned *)((char *)data_0070FB60) + 0x1C);
  h901 = *(float *)((char *)a0 + 0x3D0);
  x7 = (*(float *)((char *)t2)) - h901;
  x8 = (*(float *)((char *)t2 + 4)) - (*(float *)((char *)a0 + 0x3D4));
  x9 = (*(float *)((char *)t2 + 8)) - (*(float *)((char *)a0 + 0x3D8));
  return ((x7 * x7) + (x8 * x8)) + (x9 * x9);
}
