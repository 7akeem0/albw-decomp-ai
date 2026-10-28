typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_00361784(unsigned, unsigned);
void func_00390340(unsigned a0)
{
  unsigned t2, t3, t4;
  t2 = *(unsigned *)((char *)a0 + 0x4B4);
  t3 = (a0 + 0x400) + 0xB4;
  if ((int)t2 >= 0) {
    t4 = t2 + 1;
    *(unsigned *)((char *)t3) = t4;
    if ((int)t4 < 0x96) {
      return;
    }
    func_00361784(*(unsigned *)((char *)data_0070FB60), 0);
    *(unsigned *)((char *)a0 + 0x4B4) = (-1);
  }
  return;
}
