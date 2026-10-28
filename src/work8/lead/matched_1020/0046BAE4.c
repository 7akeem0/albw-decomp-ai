typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern char data_0070B728[];
extern char data_0070B850[];
extern char data_0070C8E0[];
extern char data_00713B28[];
extern void func_00166620(unsigned, unsigned);
extern unsigned func_00166C00(unsigned, unsigned);
extern void func_002317C0(unsigned, float);
extern unsigned func_00584B94(unsigned, unsigned);
extern unsigned func_004CDF88(unsigned, unsigned, unsigned);
extern unsigned func_005822A0(unsigned, unsigned, unsigned);
void func_0046BAE4(unsigned a0)
{
  unsigned h901, h902, h903, k1, k2, k3, t6, t10;
  unsigned t13, t19;
  k1 = (unsigned)data_0070B850;
  func_00166620(*(unsigned *)((char *)k1), 0);
  func_00166C00(*(unsigned *)((char *)k1), 1);
  *(unsigned short *)((char *)a0 + 0x74) = 2;
  func_002317C0(a0 + 0x74, 1.0f);
  k2 = (unsigned)data_00713B28;
  k3 = (unsigned)data_0070B728;
  t6 = func_00584B94(*(unsigned *)((char *)k3), *(unsigned short *)((char *)k2 + 2));
  if (t6 != 0) {
    h901 = *(unsigned short *)((char *)k2 + 6);
    t10 = func_004CDF88(*(unsigned *)((char *)k3), *(unsigned short *)((char *)k2 + 4), h901);
    h902 = t10 ^ 1;
    if (h902 != 0) {
      h903 = a0 + 0xC4;
      *(unsigned char *)((char *)h903) = *(unsigned char *)((char *)a0 + 0xC4) | 0x10;
    }
  }
  t13 = *(unsigned *)((char *)data_00709DF8);
  if ((*(unsigned char *)((char *)t13 + 0x18) == 1) && (*(unsigned *)((char *)t13 + 0x1C) == *(unsigned *)((char *)k2 + 0xC))) {
    t19 = func_005822A0(*(unsigned *)((char *)data_0070C8E0), *(unsigned *)((char *)k2 + 0x10), 0);
    if (t19 == 0) {
      return;
    }
    *(unsigned char *)((char *)a0 + 0xC4) = *(unsigned char *)((char *)a0 + 0xC4) | 0x20;
  }
  return;
}
