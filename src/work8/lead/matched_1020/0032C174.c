typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0032C7F8();
extern void func_0036E490(unsigned, unsigned, unsigned);
void func_0032C174(unsigned a0, unsigned a1)
{
  unsigned h901, t3, t4;
  if (a1 == 8) {
    return;
  }
  t3 = (a0 + 0x800) + 0xC4;
  t4 = (a0 + 0x800) + 0x19C;
  if (a1 != 6) {
    h901 = t3;
    func_0032C7F8(h901, t3);
    func_0032C7F8(t4);
    return;
  }
  *(unsigned char *)((char *)a0 + 0xC93) = 1;
  *(unsigned *)((char *)a0 + 0xC3C) = 0;
  *(unsigned char *)((char *)a0 + 0xC92) = 0;
  func_0036E490((a0 + 0x800) + 0xF8, 0, *(unsigned *)((char *)a0 + 0x8C4));
  func_0036E490(a0 + 0x9D0, 0, *(unsigned *)((char *)a0 + 0x99C));
  return;
}
