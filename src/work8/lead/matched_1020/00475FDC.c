typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00231448(unsigned);
extern void func_002317C0(unsigned, float);
extern void func_002C00A8();
void func_00475FDC(unsigned a0)
{
  unsigned t1, t6, t7;
  t1 = *(unsigned *)((char *)a0 + 0x14);
  if ((*(unsigned short *)((char *)t1 + 0x16) & 8) != 0) {
    if (*(unsigned *)((char *)t1 + 8) == 0) {
      func_00231448(a0 + 0x50);
      func_002317C0(a0 + 0x44, 1.0f);
    }
  }
  t6 = *(unsigned *)((char *)a0 + 0x14);
  t7 = *(unsigned short *)((char *)t6 + 0x16);
  if ((t7 & 0x10) != 0) {
    *(unsigned char *)((char *)a0 + 0xB4) = 1;
    func_002C00A8(t6, 1);
    return;
  }
  if ((t7 & 0x20) == 0) {
    return;
  }
  func_00231448(a0 + 0x44);
  func_002317C0(a0 + 0x50, 1.0f);
  func_002C00A8(*(unsigned *)((char *)a0 + 0x14));
  return;
}
