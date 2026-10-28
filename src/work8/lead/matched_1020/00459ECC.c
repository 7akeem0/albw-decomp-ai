typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007139B8[];
extern char data_007142B0[];
extern unsigned func_0045A090(unsigned, unsigned);
extern void func_0066D544(unsigned, unsigned);
extern unsigned func_0066E58C(unsigned, unsigned);
extern unsigned func_00459280(unsigned);
extern void func_002DFB38(unsigned);
void func_00459ECC(unsigned a0)
{
  unsigned r0, t2, t4, t5, t6;
  *(unsigned *)((char *)a0 + 0x1FC) = *(unsigned *)((char *)(unsigned)data_007139B8 + 4);
  t2 = *(signed char *)((char *)a0 + 0x1A4);
  if (t2 == 0) goto L2;
  if (t2 == 2) {
    func_0045A090(r0, t2);
  }
  goto L3;
L2:;
  func_0066D544(a0 + 0x1A0, 1);
L3:;
  t4 = *(unsigned *)((char *)a0 + 0x230);
  t5 = a0 + 0x1E4;
  t6 = t5;
  if (t4 < 3) {
    t6 = t5 + (t4 << 2);
  }
  func_0066E58C(*(unsigned *)((char *)t6) + 0xC8, 0xE);
  func_00459280(a0);
  *(unsigned *)((char *)a0 + 0x210) = (-1);
  func_002DFB38(*(unsigned *)((char *)data_007142B0));
  return;
}
