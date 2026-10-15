/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_002B75EC_0_2(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0058A7D4(unsigned);
extern unsigned func_002B7634(unsigned, unsigned);
void func_002B75EC(unsigned a0)
{
  unsigned t2, t3, t6;
  t2 = func_0058A7D4(*(unsigned *)((char *)a0 + 0x48));
  t3 = (unsigned)bind_002B75EC_0_2(t2, 101U);
  if ((int)t3 <= 0x32) {
    *(unsigned char *)((char *)*(unsigned *)((char *)a0 + 0x48) + 0x935) = 0;
    return;
  }
  t6 = *(unsigned *)((char *)a0 + 0x48);
  *(unsigned char *)((char *)t6 + 0x935) = 1;
  func_002B7634(t6, 1);
  return;
}
