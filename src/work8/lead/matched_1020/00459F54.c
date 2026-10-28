typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007139C0[];
extern unsigned func_0045A090(unsigned, unsigned);
extern void func_0066D544(unsigned, unsigned);
extern unsigned func_0012C718(unsigned, unsigned);
extern unsigned func_002317C0(unsigned, float, unsigned, unsigned, unsigned);
extern unsigned func_0066E58C(unsigned, unsigned);
extern void func_004576CC(unsigned, unsigned, unsigned);
void func_00459F54(unsigned a0)
{
  unsigned h901, r0, t2, t4, t6, t7, t8, t10;
  unsigned t11, t13, t14, t15, t16, t17, t20, t21;
  unsigned t23;
  *(unsigned *)((char *)a0 + 0x1FC) = *(unsigned *)((char *)(unsigned)data_007139C0 + 4);
  t2 = *(signed char *)((char *)a0 + 0x1A4);
  if (t2 == 0) goto L2;
  if (t2 == 2) {
    func_0045A090(r0, t2);
  }
  goto L3;
L2:;
  func_0066D544(a0 + 0x1A0, 1);
L3:;
  t4 = *(unsigned *)((char *)a0 + 0x214);
  t6 = a0 + 0x1E4;
  if (t4 < 3) {
    h901 = a0 + 0x1E4;
    t6 = h901 + (t4 << 2);
  }
  t7 = *(unsigned *)((char *)t6);
  t8 = *(signed char *)((char *)t7 + 0xD);
  if (t8 == 1) goto L6;
  if (t8 != 3) goto L7;
  if (*(unsigned char *)((char *)t7 + 0xE) != 3) goto L7;
L6:;
  t10 = a0 + 0x1E4;
  t11 = t10;
  if (t4 < 3) {
    t11 = t10 + (t4 << 2);
  }
  func_0012C718(*(unsigned *)((char *)t11), t11);
L7:;
  t13 = *(unsigned *)((char *)a0 + 0x1C);
  t14 = a0 + 0x134;
  *(unsigned *)((char *)a0 + 0x13C) = t13;
  *(unsigned short *)((char *)t14 + 2) = 0x1E;
  *(unsigned short *)((char *)t14) = 0;
  ((unsigned (*)(unsigned, float, unsigned, unsigned, unsigned))func_002317C0)(t14, 1.0f, 0, 0x1E, t13);
  t15 = *(unsigned *)((char *)a0 + 0x230);
  t16 = a0 + 0x1E4;
  t17 = t16;
  if (t15 < 3) {
    t17 = t16 + (t15 << 2);
  }
  func_0066E58C(*(unsigned *)((char *)t17) + 0xC8, 0xF);
  t20 = *(unsigned *)((char *)a0 + 0x1C4);
  t21 = *(unsigned char *)((char *)t20 + 0xD);
  if ((t21 == 0) && (*(unsigned char *)((char *)t20 + 0xE) == 0)) {
    t23 = 1;
    *(unsigned char *)((char *)t20 + 0xE) = t23;
  }
  func_004576CC(a0, 0, 0);
  return;
}
