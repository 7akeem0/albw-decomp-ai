typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_002255D0();
void func_00227EB0(unsigned a0)
{
  unsigned t1, t2, t3, t4, t13, t14, t21, t22, ka11, ka20;
  unsigned t27, t28, t31, t32;
  t1 = a0 + 0x400;
  t2 = *(unsigned char *)((char *)a0 + 0x73C);
  if (t2 != 4) {
    if (t2 == 3) goto L6;
    if (t2 == 2) goto L7;
    if (t2 == 1) goto L8;
    t31 = *(unsigned *)((char *)a0 + 0x6C0);
    t32 = *(unsigned *)((char *)a0 + 0x6EC);
    ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, t31, t32, 1, 0.0f, 0.0f);
    return;
  }
  t3 = *(unsigned *)((char *)a0 + 0x6B0);
  t4 = *(unsigned *)((char *)a0 + 0x6DC);
  func_002255D0(a0, t3, t4, 1);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2B4), *(unsigned *)((char *)a0 + 0x6E0), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2B8), *(unsigned *)((char *)a0 + 0x6E4), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2BC), *(unsigned *)((char *)a0 + 0x6E8), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2C0), *(unsigned *)((char *)a0 + 0x6EC), 0, 0.0f, 0.0f);
  return;
  L6:;
  t13 = *(unsigned *)((char *)a0 + 0x6B4);
  ka11 = a0 + 0x6E0;
  t14 = *(unsigned *)((char *)ka11);
  func_002255D0(a0, t13, t14, 1);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2B8), *(unsigned *)((char *)a0 + 0x6E4), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2BC), *(unsigned *)((char *)a0 + 0x6E8), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2C0), *(unsigned *)((char *)a0 + 0x6EC), 0, 0.0f, 0.0f);
  return;
  L7:;
  t21 = *(unsigned *)((char *)a0 + 0x6B8);
  t22 = *(unsigned *)((char *)a0 + 0x6E4);
  func_002255D0(a0, t21, t22, 1);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2BC), *(unsigned *)((char *)a0 + 0x6E8), 0, 0.0f, 0.0f);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)t1 + 0x2C0), *(unsigned *)((char *)a0 + 0x6EC), 0, 0.0f, 0.0f);
  return;
  L8:;
  t27 = *(unsigned *)((char *)a0 + 0x6BC);
  t28 = *(unsigned *)((char *)a0 + 0x6E8);
  func_002255D0(a0, t27, t28, 1);
  ka20 = t1 + 0x2C0;
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned, float, float))func_002255D0)(a0, *(unsigned *)((char *)ka20), *(unsigned *)((char *)a0 + 0x6EC), 0, 0.0f, 0.0f);
  return;
}
