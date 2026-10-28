typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0014F794(unsigned);
extern unsigned func_004CF478(unsigned, unsigned, unsigned);
unsigned func_002C8FC8(unsigned a0)
{
  unsigned r0, t1, t3;
  t1 = *(unsigned char *)((char *)a0 + 0x478);
  r0 = t1;
  if (t1 != 0) {
    r0 = 1;
  }
  if (t1 == 0) {
    t3 = func_0014F794(a0);
    func_004CF478(*(unsigned *)((char *)a0 + 0x430), t3, 0);
    *(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x444) + 0x44) = t3;
    r0 = t3;
  }
  return r0;
}
