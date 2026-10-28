typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00476BA8(unsigned);
extern void func_00476CA0(unsigned, unsigned);
extern unsigned func_0066C424(unsigned, unsigned);
extern void func_0044B62C(unsigned);
void func_0043E0AC(unsigned a0)
{
  unsigned t2, t3, t4, t8, t9;
  func_00476BA8(*(unsigned *)((char *)a0 + 0x158));
  t2 = *(unsigned char *)((char *)a0 + 0xD);
  t3 = t2;
  if (t2 == 3) {
    t3 = *(unsigned char *)((char *)a0 + 0xE);
  }
  t4 = t3;
  if ((t2 == 3) && (t3 == 3)) {
    t4 = *(unsigned char *)((char *)a0 + 0x78);
  }
  if ((((t2 == 3) && (t3 == 3)) && (t4 == 4)) || (*(unsigned char *)((char *)a0 + 0x78) == 5)) {
    func_00476CA0(*(unsigned *)((char *)a0 + 0x158), 1);
    func_0066C424(a0 + 0x74, 0);
  }
  t8 = *(unsigned *)((char *)a0 + 0x148);
  if (t8 != 0) {
    t9 = *(unsigned *)((char *)a0 + 0x154);
    if (t8 != t9) {
      return;
    }
    func_0044B62C(t9);
    return;
  }
}
