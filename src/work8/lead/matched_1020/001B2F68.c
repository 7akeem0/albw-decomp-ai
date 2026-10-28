typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB0A4(unsigned, float);
extern void func_004FB4E0(unsigned, float);
void func_001B2F68(unsigned a0, unsigned a1, unsigned a2)
{
  if (*(unsigned char *)((char *)a0 + 0x8C0) != 7) {
    if (a1 == 18u) {
      return;
    }
    if (a1 == 32u) goto L7;
    if ((a1 + (-5)) <= 4) {
      return;
    }
    if (*(unsigned char *)((char *)a2 + 0x27) == 0) {
      return;
    }
    func_004FABDC(a0, 5, (-1), 0);
    return;
  }
  func_004FABDC(a0, 9, 0, 0);
  func_004FB0A4(a0, 1.0f);
  func_004FB4E0(a0, 0.0f);
  return;
  L7:;
  func_004FABDC(a0, 0xA, (-1), 0);
  *(unsigned *)((char *)a0 + 0x944) = 0xA;
  return;
}
