typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern void func_00231524(unsigned);
extern void func_00231448(unsigned);
extern unsigned func_0066CC58(unsigned, unsigned);
extern void func_0051B5C4(unsigned);
extern unsigned func_00447A40(unsigned);
extern unsigned func_001B6A48(unsigned, unsigned);
extern void func_004B989C(unsigned);
void func_004493C4(unsigned a0)
{
  unsigned t8, t12, t13;
  func_00231524(a0 + 0xE0);
  func_00231448(a0 + 0xD4);
  func_00231448(a0 + 0x11C);
  func_00231524(a0 + 0x110);
  if (*(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x210) + 0x5D) != 0) {
    func_0066CC58(a0 + 0x158, 6);
    func_0051B5C4(*(unsigned *)((char *)data_007142C8));
  } else {
    t8 = *(signed char *)((char *)a0 + 0x15C);
    if (*(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x20C) + 0x5D) != 0) {
      if ((t8 == 2) || (t8 == 1)) goto L8;
      func_0066CC58(a0 + 0x158, 2);
    } else {
      if (t8 != 0) {
        if (t8 != 3) {
          func_0066CC58(a0 + 0x158, 0);
        }
      }
    }
    L8:;
    func_00447A40(a0);
    t12 = *(unsigned *)((char *)a0 + 0x214);
    t13 = *(unsigned char *)((char *)t12 + 0xD);
    if ((t13 == 0) && (*(unsigned char *)((char *)t12 + 0xE) == 0)) {
      *(unsigned char *)((char *)t12 + 0xE) = 1;
      func_001B6A48(t12, 1);
    }
  }
  *(unsigned char *)((char *)a0 + 0xF) = 0x84;
  func_004B989C(*(unsigned *)((char *)a0 + 0x10));
  *(unsigned char *)((char *)a0 + 0x285) = 0;
  *(unsigned char *)((char *)a0 + 0x284) = 0;
  return;
}
