typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_00151148(unsigned, unsigned);
void func_004BCAE0(unsigned a0, unsigned a1)
{
  unsigned k1, t3, t4, t5, t6, t7;
  if (*(unsigned char *)((char *)a0 + 0x860) == 0) {
    return;
  }
  k1 = 0;
  *(unsigned char *)((char *)a0 + 0x860) = k1;
  func_004CF478(*(unsigned *)((char *)a0 + 0x7A0), 1, k1);
  if (a1 != 0) {
    t3 = *(unsigned *)((char *)a0 + 0x7A4);
    *(unsigned char *)((char *)a0 + 0x919) = k1;
    if (t3 != 0) {
      func_004CF478(t3, 1, 0);
    }
  }
  t4 = *(unsigned *)((char *)a0 + 0x78C);
  if (t4 != 0) {
    t5 = 1;
    func_00151148(t4, t5);
  }
  t6 = a0 + 0x410;
  if (t6 != 0) {
    *(unsigned char *)((char *)t6 + 0x61) = 1;
  }
  t7 = *(unsigned *)((char *)a0 + 0x86C);
  if (t7 != 0) {
    *(unsigned char *)((char *)t7 + 0x44) = 1;
  }
  return;
}
