typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00231524(unsigned);
extern void func_002313DC(unsigned);
void func_0038A8EC(unsigned a0)
{
  unsigned t1, t2, t3, t4, t5;
  t1 = *(unsigned *)((char *)a0 + 0x184);
  t2 = a0 + 0x17C;
  if (t1 != 0) {
    t3 = *(short *)((char *)t2 + 2);
    if ((int)t3 < 0) {
      return;
    }
    t4 = *(unsigned *)((char *)a0 + 0x188);
    t5 = a0 + 0x17C;
    if ((int)t4 > 0x28) {
      func_00231524(t5);
      return;
    }
    func_002313DC(t5);
    return;
  }
}
