typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004FC994(unsigned, unsigned);
extern unsigned func_004CF478(unsigned, unsigned, unsigned);
void func_002226D8(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5;
  t1 = *(unsigned *)((char *)a0 + 0x18);
  if (t1 == 0) {
    return;
  }
  t2 = *(unsigned *)((char *)a0 + 0x10);
  t3 = t2 + 0x400;
  t4 = t3 + 0x1A8;
  func_004FC994(t4, t1);
  t5 = *(unsigned *)((char *)a0 + 0x18);
  func_004CF478(t5, 0, 0);
  *(unsigned char *)((char *)a0 + 0x25) = 0;
  return;
}
