typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00712588[];
extern unsigned func_005215DC(unsigned);
extern unsigned func_001522C0(unsigned, unsigned);
unsigned func_004C684C(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned r0, t3, t5, t9;
  if (*(unsigned char *)((char *)a0 + 0x5A4) == 1) {
    t3 = a0 + 0x500;
    if (*(unsigned char *)((char *)a0 + 0x59C) != 0) {
      t5 = func_005215DC(*(unsigned *)((char *)a0 + 0x518));
      r0 = t5;
      if (t5 != 0) {
        r0 = 0;
        *(unsigned char *)((char *)a0 + 0x59C) = r0;
      }
      if (t5 == 0) goto L7;
    }
    if (*(unsigned char *)((char *)t3 + 0x9D) == 0) {
      t9 = func_005215DC(*(unsigned *)((char *)a0 + 0x518));
      if (t9 != 0) {
        if (*(unsigned *)((char *)*(unsigned *)((char *)data_00712588) + 0x10) == 0) goto L8;
      }
    }
  }
  r0 = 0;
  L7:;
  return r0;
  L8:;
  func_001522C0(*(unsigned *)((char *)a0 + 0x518), a1);
  *(unsigned *)((char *)a0 + 0x5A8) = a2;
  *(unsigned char *)((char *)a0 + 0x5A4) = 2;
  return 1;
}
