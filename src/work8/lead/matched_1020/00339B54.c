typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00110848(unsigned, unsigned, unsigned);
extern unsigned func_004A1B9C(unsigned, unsigned, unsigned);
unsigned func_00339B54(unsigned a0, unsigned a1)
{
  unsigned lv[2];
  unsigned k1, t3, t4, t5, t6, t9;
  if (a1 != 0) {
    return 1;
  }
  k1 = (unsigned)"Notice";
  t3 = (a0 + 0x800) + 0x18C;
  if (*(unsigned *)((char *)a0 + 0x344) != 0) {
    t4 = *(unsigned *)((char *)t3);
    if (t4 != 0) {
      t5 = *(unsigned *)((char *)t4 + 0x1C);
      t6 = *(unsigned *)((char *)t3 + 4);
      if (t5 == t6) {
        func_00110848(t4, t6, t5);
      }
    }
    func_004A1B9C((unsigned)&lv[0], *(unsigned *)((char *)a0 + 0x344), k1);
    t9 = *(unsigned *)((char *)&lv[1]);
    *(unsigned *)((char *)t3) = *(unsigned *)((char *)&lv[0]);
    *(unsigned *)((char *)t3 + 4) = t9;
  } else {
    *(unsigned *)((char *)t3) = 0;
    *(unsigned *)((char *)t3 + 4) = 0;
  }
  return 1;
}
