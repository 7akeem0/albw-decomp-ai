typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_003E1544(unsigned);
extern unsigned func_003E1700(unsigned, unsigned);
void func_003E16D4(unsigned a0, unsigned a1)
{
  unsigned h901, t1;
  *(unsigned char *)((char *)a0 + 4) = a1;
  if (a1 == 1) {
    t1 = *(unsigned *)((char *)a0 + 0x68);
    func_003E1544(t1);
  }
  h901 = a1;
  func_003E1700(*(unsigned *)((char *)a0 + 0x68), h901);
  return;
}
