typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070D858[];
extern char data_0070FB60[];
extern unsigned func_0014DDEC(unsigned);
extern unsigned func_004CF478(unsigned, unsigned, unsigned);
extern unsigned func_00151148(unsigned, unsigned);
extern unsigned func_00556CD0(unsigned);
unsigned func_0037C668(unsigned a0)
{
  unsigned t1, t5, t6, t8, t9, t12;
  t1 = func_0014DDEC(a0);
  if (*(unsigned char *)((char *)a0 + 0x42B) == 2) goto L2;
  t12 = t1;
  if ((*(unsigned *)((char *)*(unsigned *)((char *)data_0070D858) + 0x2B4) & 8) != 0) {
    t12 = 1;
  }
  return t12;
L2:;
  t5 = *(unsigned *)((char *)((a0 + 0x400) + 0xC));
  t6 = *(unsigned *)((char *)((a0 + 0x400) + 0xC) + 4);
  if ((t5 == 0) || (t6 == 0)) goto L4;
  func_004CF478(t5, 0, 0);
  func_00151148(t6, 0);
L4:;
  t8 = func_00556CD0(*(unsigned *)((char *)data_0070FB60));
  if (t8 == 0) {
    t9 = 1;
    *(unsigned char *)((char *)a0 + 0x2D7) = t9;
  }
  return 0;
}
