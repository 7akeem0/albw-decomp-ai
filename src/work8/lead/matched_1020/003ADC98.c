typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00706E20[];
void func_003ADC98(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5;
  t1 = *(unsigned *)((char *)a0 + 0x2CC);
  t2 = *(unsigned *)((char *)data_00706E20);
  t3 = t2 + 0x3D800;
  t4 = t3 + 0x3E8;
  t5 = *(unsigned *)((char *)t4);
  *(unsigned *)((char *)t5 + 0xC) = t1;
  *(unsigned *)((char *)a0 + 0x44C) = 0;
  *(unsigned *)((char *)a0 + 0x450) = 0;
  return;
}
