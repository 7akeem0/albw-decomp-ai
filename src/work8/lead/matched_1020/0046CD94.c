typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern void func_001B6D40(unsigned);
extern void func_0012C718(unsigned);
extern void func_001E36CC(unsigned, unsigned, unsigned);
void func_0046CD94(unsigned a0)
{
  unsigned t3, t5;
  func_001B6D40(a0);
  func_0012C718(*(unsigned *)((char *)a0 + 0xB0));
  t3 = *(unsigned *)((char *)*(unsigned *)((char *)data_007142C8) + 0x130);
  t5 = *(unsigned char *)((char *)t3 + 0x74) & (-2);
  *(unsigned char *)((char *)t3 + 0x74) = t5;
  func_001E36CC(*(unsigned *)((char *)*(unsigned *)((char *)data_007142C8) + 0x130), (unsigned)data_007142C8, t5);
  return;
}
