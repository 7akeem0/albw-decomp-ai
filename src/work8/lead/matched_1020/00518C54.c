typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern char data_00712538[];
extern char data_00712588[];
extern char bss_0079E048[];
extern void func_002DF3E4(unsigned);
extern unsigned func_004EE86C(unsigned, unsigned, unsigned);
extern unsigned func_001E18A8(unsigned, unsigned);
extern unsigned func_004EE8DC(unsigned, unsigned);
void func_00518C54(unsigned a0)
{
  unsigned h901, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10, t11, t12;
  t1 = *(unsigned *)((char *)data_00712588);
  func_002DF3E4(t1);
  t2 = *(unsigned *)((char *)data_00709DF8);
  t3 = t2 + 0x48;
  t4 = t2 + 0x18;
  t5 = *(signed char *)((char *)t3);
  t6 = t3;
  if ((t5 + 1) == 0) {
    t6 = t4;
  }
  t7 = func_004EE86C(t6, t4, t5);
  t8 = *(unsigned *)((char *)data_00712538);
  h901 = t8;
  func_001E18A8(h901, t7);
  t9 = *(unsigned *)((char *)bss_0079E048);
  t10 = a0 + 0x44;
  t11 = t9 > 1 ? *(unsigned *)((char *)t10 + 4) : *(unsigned *)((char *)t10);
  t12 = *(unsigned *)((char *)data_00709DF8);
  func_004EE8DC(t12, t11);
  return;
}
