typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00706E20[];
extern void func_002DFF7C(unsigned);
extern unsigned func_005474A8(unsigned, unsigned);
extern unsigned func_004C4AF4(unsigned, unsigned, unsigned);
extern  unsigned func_00663A98(unsigned, unsigned);
void func_002D0444(unsigned a0, unsigned a1)
{
  unsigned lv[177];
  unsigned t4;
  if (*(unsigned char *)((char *)a0 + 0x424) != 1) {
    return;
  }
  if (a1 != 0) {
    *(unsigned *)((char *)&lv[8]) = 0;
    *(unsigned *)((char *)&lv[9]) = 0;
    *(unsigned *)((char *)&lv[7]) = 0;
    *(unsigned *)((char *)&lv[18]) = 0;
    *(unsigned *)((char *)&lv[19]) = 0;
    *(unsigned *)((char *)&lv[176]) = 0;
    func_002DFF7C((unsigned)&lv[0]);
    func_005474A8(a0 + 4, (unsigned)&lv[0]);
    *(float *)((char *)&lv[17]) = 1.0f;
    t4 = func_004C4AF4(*(unsigned *)((char *)data_00706E20), (unsigned)&lv[0], 0);
    if (t4 != 0) {
      return;
    }
  }
  func_00663A98(a0 + 0x420, 2);
  return;
}
