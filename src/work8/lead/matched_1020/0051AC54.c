typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0043D310(unsigned);
extern unsigned func_001B6C2C(unsigned, unsigned);
void func_0051AC54(unsigned a0)
{
  unsigned h901, t1, t2, t4, t6, t8;
  t1 = *(unsigned *)((char *)a0 + 0x80);
  if (t1 != 0) {
    func_0043D310(t1);
  }
  t2 = *(unsigned *)((char *)a0 + 0xE0);
  if (t2 != 0) {
    t4 = *(unsigned *)((char *)t2 + 0x18) & (-5);
    *(unsigned *)((char *)t2 + 0x18) = t4;
    func_001B6C2C(*(unsigned *)((char *)a0 + 0xE0), t4);
    t6 = *(unsigned *)((char *)a0 + 0x84);
    t8 = (a0 + 0x300) + 0x3E;
    *(unsigned *)((char *)t6 + 0x18) = *(unsigned *)((char *)t6 + 0x18) | 4;
    h901 = *(unsigned short *)((char *)t8);
    *(unsigned short *)((char *)t8) = h901 & (-9);
  }
  return;
}
