typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070BB18[];
extern unsigned func_00130334(unsigned, unsigned);
extern unsigned func_002FE9A8(unsigned);
extern unsigned func_0016B990(unsigned, unsigned, unsigned);
extern unsigned func_002FE9CC(unsigned);
extern unsigned func_001309A4(unsigned, unsigned, unsigned, unsigned);
extern void func_002FE86C(unsigned);
void func_00130AA0(unsigned a0)
{
  unsigned r6, t5, t6, t7, t11, t12, t15;
  unsigned t16, t17, t18, t20;
  func_00130334(a0, 1);
  if (*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x28C8) + 8) == 0) goto L2;
  if ((*(unsigned char *)((char *)a0 + 0x2C1E) & 8) == 0) goto L3;
L2:;
  func_002FE9A8(*(unsigned *)((char *)a0 + 0x4C));
  return;
L3:;
  t5 = (a0 + 0x2000) + 0x8D0;
  t6 = *(unsigned char *)((char *)a0 + 0x2C1F);
  t7 = r6;
  if ((t6 & 1) != 0) {
    t7 = t5 + 4;
  }
  if ((t6 & 1) == 0) goto L5;
  t11 = ((unsigned (*)(unsigned, unsigned))*(unsigned *)((char *)*(unsigned *)((char *)(*(unsigned *)((char *)t7))) + 0x18))((*(unsigned *)((char *)t7)), 0);
  t12 = *(unsigned *)((char *)t7);
  t15 = ((unsigned (*)(unsigned, unsigned))*(unsigned *)((char *)*(unsigned *)((char *)t12) + 0x18))(t12, 1);
  t16 = t15 + 4;
  t17 = t11 + 4;
  t18 = *(unsigned *)((char *)data_0070BB18);
  func_0016B990(t18, t16, t17);
L5:;
  t20 = func_002FE9CC(*(unsigned *)((char *)a0 + 0x4C));
  func_001309A4(a0, t20, *(unsigned *)((char *)t5), 3);
  func_002FE86C(*(unsigned *)((char *)a0 + 0x4C));
  return;
}
