typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FC07C(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_003529A0(unsigned, unsigned, unsigned);
extern void func_002C41BC(unsigned, unsigned, unsigned);
extern  unsigned func_0037EEE8(unsigned, unsigned);
void func_0038148C(unsigned a0)
{
  unsigned lv[9];
  unsigned k1, t1, t2, t3, t4, t5, t6, t7;
  unsigned t8, t9, t10;
  func_004FC07C(a0, 1, (-1), 0);
  k1 = 1;
  *(unsigned char *)((char *)a0 + 0xB33) = k1;
  t1 = *(unsigned *)((char *)a0);
  t2 = *(unsigned *)((char *)t1 + 0x48);
  t3 = ((unsigned (*)(unsigned))t2)(a0);
  t4 = *(unsigned *)((char *)t3);
  t5 = *(unsigned *)((char *)t4 + 8);
  ((unsigned (*)(unsigned))t5)(t3);
  t6 = *(unsigned *)((char *)t3 + 4);
  t7 = a0 + 0x320;
  func_003529A0((unsigned)&lv[0], t6, t7);
  t8 = *(unsigned short *)((char *)a0 + 0x2E);
  if (t8 == 0) {
    t9 = 0;
    *(unsigned *)((char *)&lv[6]) = t9;
  }
  t10 = a0 + 0x320;
  if (t8 != 0) {
    *(unsigned *)((char *)&lv[6]) = k1;
  }
  func_002C41BC(t10, (unsigned)&lv[0], 0);
  *(unsigned short *)((char *)a0 + 0xB2A) = 0xC8;
  func_0037EEE8(a0, 0xB2A);
  return;
}
