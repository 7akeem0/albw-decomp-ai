typedef unsigned int u32;
extern void func_004BD280(unsigned, unsigned, unsigned);
void func_004BD200(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned mode = *(unsigned char *)((char *)a0 + 0x989);
  unsigned value = a1;
  switch (mode) {
  case 0:
    break;
  case 1:
    value = a1 ? a1 : 4;
    if (a1 == 0) break;
    if (value == 1) value = 5;
    break;
  case 2:
    value = a1 ? a1 : 6;
    if (a1 == 0) break;
    if (value == 1) value = 7;
    break;
  case 3:
    value = a1 ? a1 : 12;
    if (a1 == 0) break;
    if (value == 1) value = 13;
    else if (value == 2) value = 14;
    break;
  default:
    value = a1;
    break;
  }
  func_004BD280(a0, value, a2);
}
