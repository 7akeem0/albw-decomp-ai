typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_002317C0(unsigned, float, unsigned, unsigned, unsigned);
void func_0045109C(unsigned a0)
{
  unsigned t1, t4, t12, t13;
  t1 = *(unsigned *)((char *)a0 + 0x138);
  ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t1) + 0x50))(t1);
  t4 = *(unsigned *)((char *)a0 + 0x13C);
  if (t4 != 0) {
    ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t4) + 0x4C))(t4);
  }
  *(unsigned *)((char *)a0 + 0x18) = *(unsigned *)((char *)a0 + 0x18) & (-129);
  if ((int)*(signed char *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x138) + 0x14) + 0x14) >= 3) {
    return;
  }
  t12 = *(unsigned *)((char *)a0 + 0x1C);
  t13 = a0 + 0x120;
  *(unsigned *)((char *)a0 + 0x128) = t12;
  *(unsigned short *)((char *)t13 + 2) = 2;
  *(unsigned short *)((char *)t13) = 0;
  func_002317C0(t13, 1.0f, 0, 2, t12);
  return;
}
