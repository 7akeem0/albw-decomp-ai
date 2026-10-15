typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006C8914[];
extern char data_00709D28[];
extern void func_0010F1F8(unsigned);
unsigned func_0016F13C(unsigned a0)
{
  unsigned t1, t3, t6, t7;
  *(unsigned *)((char *)a0) = (unsigned)ro_006C8914;
  t1 = *(unsigned *)((char *)data_00709D28);
  if (t1 != 0) {
    t3 = (t1 + 0xBC00) + 0x33C;
    t6 = (a0 + 0x400) + *(unsigned *)((char *)t3 + 0xC);
    t7 = *(unsigned *)((char *)t6 + 4);
    if ((t7 == 0) && (*(unsigned *)((char *)t6) == 0)) {
      return a0;
    }
    func_0010F1F8(t6);
    *(unsigned *)((char *)t3 + 8) = *(unsigned *)((char *)t3 + 8) + (-1);
  }
  return a0;
}
