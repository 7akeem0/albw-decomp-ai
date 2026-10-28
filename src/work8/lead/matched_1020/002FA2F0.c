typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_002FA2F0(unsigned a0, unsigned a1)
{
  unsigned t1, t2;
  t1 = a1 & 0xFF;
  if (t1 != 30u) {
    t2 = t1 + (-14);
  }
  if (((t1 == 30u) || (t2 > 3)) && ((t1 != 30u) || (t1 > 30u))) {
    if ((a1 & 0xFF) + (-21) > 7) {
      return;
    }
    func_004FABDC(a0, 7, (-1), 0);
    *(unsigned char *)((char *)a0 + 0xA2C) = 1;
    return;
  }
  func_004FABDC(a0, 8, (-1), 0);
  return;
}
