typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern unsigned func_001E3328(unsigned, unsigned);
extern void func_00369EBC(unsigned, unsigned);
unsigned func_00239E38(unsigned a0, unsigned a1)
{
  unsigned r0, t1, t3, t5;
  if (a1 == 0) {
    *(unsigned char *)((char *)a0 + 0x4E0) = 1;
  }
  t1 = a0;
  if (a1 == 0) {
    t1 = 1;
  }
  r0 = t1;
  if (a1 != 0) {
    if (a1 == 1) {
      *(unsigned char *)((char *)t1 + 0x4E1) = 1;
    }
    r0 = t1;
    if (a1 == 1) {
      r0 = 0;
    }
    if (a1 == 1) {
      return r0;
    }
    t3 = *(unsigned *)((char *)data_007142C8);
    if (a1 != 2) {
      if (a1 == 3) {
        t5 = *(unsigned *)((char *)t3 + 0x130);
        func_001E3328(t5, a1);
      }
    } else {
      func_00369EBC(*(unsigned *)((char *)t3 + 0x130), 3);
    }
    r0 = 1;
  }
  return r0;
}
