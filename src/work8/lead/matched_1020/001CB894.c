typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070FB60[];
extern void func_004BC7BC(unsigned);
extern void func_001CB798(unsigned, float);
extern unsigned func_0053F9B8(unsigned);
extern void func_004BCAE0(unsigned, unsigned);
extern void func_004BDB04(unsigned);
extern void func_006177C0(unsigned, unsigned, unsigned);
void func_001CB894(unsigned a0)
{
  unsigned t3;
  if ((int)*(unsigned *)((char *)a0 + 0x960) <= 1) {
    func_004BC7BC(a0);
    func_001CB798(a0, 0.009999999776482582f);
  }
  t3 = func_0053F9B8(*(unsigned *)((char *)data_0070FB60));
  if (t3 != 0) {
    func_004BCAE0(a0, 1);
    func_004BDB04(a0);
    func_001CB798(a0, 0.009999999776482582f);
    func_006177C0(a0, 7, 0);
    return;
  }
  return;
}
