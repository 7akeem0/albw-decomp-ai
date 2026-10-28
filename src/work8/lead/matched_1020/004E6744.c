typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709F30[];
extern char data_0070FB60[];
extern char bss_007860A0[];
extern char bss_007860AC[];
extern unsigned func_00688C34(unsigned, float, float);
extern unsigned func_0028FD00(unsigned);
extern void func_004C6654(unsigned, unsigned);
void func_004E6744(unsigned a0)
{
  unsigned k1, k2, k3, t3, t4, t6, t7, t8;
  unsigned t11;
  float x1, x2, x3, x4, x5, x6, x7;
  k1 = 1;
  if (*(unsigned char *)((char *)a0 + 0x561) != 0) {
    k2 = (unsigned)bss_007860A0;
    k3 = (unsigned)bss_007860AC;
    x1 = *(float *)((char *)k2);
    x3 = (*(unsigned *)((char *)a0 + 0x3E8) != 1073741824u) ? -x1 : x1;
    x2 = *(float *)((char *)k3);
    t6 = a0 + 0x3DC;
    func_00688C34(t6, x3, x2);
    x4 = *(float *)((char *)k3 + 4);
    x5 = *(float *)((char *)k2 + 4);
    t7 = a0 + 0x3E0;
    func_00688C34(t7, x5, x4);
    x6 = *(float *)((char *)k3 + 8);
    x7 = *(float *)((char *)k2 + 8);
    t8 = a0 + 0x3E4;
    func_00688C34(t8, x7, x6);
    if ((int)*(unsigned *)((char *)a0 + 0x4E4) <= 0x5A) {
      return;
    }
    *(unsigned char *)((char *)a0 + 0x562) = k1;
    t11 = *(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x320) + 0x58);
    ((unsigned (*)(unsigned, unsigned))t11)((a0 + 0x320), 0);
    *(unsigned char *)((char *)a0 + 0x2D7) = k1;
    return;
  }
  t3 = func_0028FD00(*(unsigned *)((char *)data_0070FB60));
  if (t3 == 0) {
    return;
  }
  *(unsigned char *)((char *)a0 + 0x561) = k1;
  t4 = *(unsigned *)((char *)data_00709F30);
  if (t4 == 0) {
    return;
  }
  func_004C6654(t4, 0x20);
  return;
}
