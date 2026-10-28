typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00669D74(unsigned, unsigned);
extern unsigned func_003ABB24(unsigned, unsigned, unsigned);
extern void func_003B147C(unsigned, unsigned, unsigned);
void func_003BE700(unsigned a0)
{
  unsigned k1, t1, t3, t5, t10, t11;
  t1 = *(unsigned *)((char *)a0 + 0x48);
  t3 = *(unsigned *)((char *)*(unsigned *)((char *)t1 + 0x8DC) + 0x14);
  if (*(unsigned char *)((char *)t3 + 0x1C) != 0) {
    return;
  }
  if ((*(float *)((char *)t3 + 0x10)) >= 0.0f) {
    if ((*(float *)((char *)t3 + 8)) == (*(float *)((char *)t3 + 0x14))) goto L5;
    return;
  }
  if ((*(float *)((char *)t3 + 8)) <= 0.0f) goto L5;
  return;
  L5:;
  t5 = *(unsigned *)((char *)t1 + 0xBCC);
  if (t5 != 0) {
    ((unsigned (*)(unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t5) + 0x14))(t5);
  }
  func_00669D74(a0 + 0x6C, 0);
  k1 = 1;
  t10 = *(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x48) + 0x93C);
  t11 = func_003ABB24(t10, k1, k1);
  if (t11 == 0) {
    return;
  }
  func_003B147C(*(unsigned *)((char *)t10 + 4), k1, 1);
  return;
}
