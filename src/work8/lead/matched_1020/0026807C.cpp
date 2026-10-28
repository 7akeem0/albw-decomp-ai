/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188
struct BFlag { unsigned v; void change(unsigned m, bool b) { if (b) v |= m; else v &= ~m; } };



extern char ro_00693110[];
extern char ro_00693130[];
extern char ro_0069315C[];
extern char ro_00693218[];
extern char ro_00693270[];
extern void func_0036C408(unsigned, unsigned);
void func_0026807C(unsigned a0)
{
  *(unsigned char *)((char *)a0 + 0xAA0) = 0;
  func_0036C408((a0 + 0x800) + 0x1AC, *(unsigned *)((char *)ro_0069315C));
  func_0036C408((a0 + 0x800) + 0x1AC, *(unsigned *)((char *)ro_00693218));
  func_0036C408((a0 + 0x800) + 0x1AC, *(unsigned *)((char *)ro_00693270));
  func_0036C408((a0 + 0x800) + 0x1AC, *(unsigned *)((char *)ro_00693110));
  func_0036C408((a0 + 0x800) + 0x1AC, *(unsigned *)((char *)ro_00693130));
  ((BFlag *)(a0 + 0x59C))->change(0x80, true);
  ((BFlag *)(a0 + 0x59C))->change(0x4000, false);
  return;
}
