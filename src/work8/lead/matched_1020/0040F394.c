typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_0010C0C0(unsigned);
extern unsigned func_003E696C(unsigned, unsigned);
extern unsigned func_0010C160(unsigned);
unsigned func_0040F394(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned h901, t1, t2, t4, t5, t6;
  t1 = a0 + 0x2C;
  h901 = t1;
  func_0010C0C0(h901);
  t2 = a1 + (a1 << 1);
  if (*(unsigned *)((char *)a0 + (t2 << 2)) != 0) {
    t4 = a0 + (t2 << 2);
    t5 = *(unsigned *)((char *)t4 + 4);
    t6 = t5 + (-4);
    if (a2 != 0) {
      func_003E696C(t4, t5);
    }
    func_0010C160(t1);
    return t6;
  }
  func_0010C160(t1);
  return 0;
}
