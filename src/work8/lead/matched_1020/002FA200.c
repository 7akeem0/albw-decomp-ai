typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern  unsigned func_00664230(unsigned, unsigned);
extern unsigned func_001119F4(unsigned, unsigned, unsigned);
extern  unsigned func_001880A4(unsigned, unsigned, unsigned);
void func_002FA200(unsigned a0)
{
  unsigned lv[16];
  unsigned t4, t9, t12, kt1;
  if (*(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x510) + 4) != 0) {
    return;
  }
  t4 = (a0 + 0x800) + 0xBC;
  if ((int)*(short *)((char *)a0 + 0x508) <= 0) {
    func_00664230(t4, 5);
    if (*(unsigned char *)((char *)a0 + 0xA2C) != 0) {
      return;
    }
    t9 = *(unsigned *)((char *)a0 + 0xA08);
    t12 = *(unsigned *)((char *)*(unsigned *)((char *)*(unsigned *)((char *)a0 + 0x40C) + 0x24) + 0x14);
    kt1 = (unsigned)&lv[0];
    func_001119F4(kt1, t12 + ((t9 + (t9 << 1)) << 4), t12);
    *(unsigned *)((char *)&lv[13]) = *(unsigned *)((char *)&lv[3]);
    *(unsigned *)((char *)&lv[14]) = *(unsigned *)((char *)&lv[7]);
    *(unsigned *)((char *)&lv[15]) = *(unsigned *)((char *)&lv[11]);
    func_001880A4((unsigned)&lv[13], 0, *(unsigned *)((char *)a0 + 0x2CC));
    return;
  }
  func_00664230(t4, 2);
  return;
}
