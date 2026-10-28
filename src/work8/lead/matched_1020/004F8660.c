typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004F9728(unsigned, unsigned, unsigned);
extern void func_004FD0B4(unsigned);
extern unsigned func_004F499C(unsigned, unsigned);
unsigned func_004F8660(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned h901, k1, k2, r6, t1, t2, t3, t4;
  unsigned t5, t6, t7, t8, t9, t10;
  h901 = a0 + 0x5A0;
  t1 = *(unsigned *)((char *)h901);
  t2 = 1 & (~(t1 >> 4));
  t3 = t2 | a3;
  k1 = 0;
  r6 = k1;
  if (t3 != 0) {
    t4 = *(unsigned char *)((char *)a0 + 0x858);
    if (t4 != 0) {
      t5 = *(unsigned char *)((char *)a0 + 0x894);
      t6 = *(unsigned char *)((char *)a0 + 0x4DC);
      func_004F9728(a0, t6, t5);
    }
    k2 = 1;
    r6 = k2;
  }
  t7 = *(unsigned *)((char *)a0 + 0x5A0);
  t8 = t7 | 0x10;
  *(unsigned *)((char *)a0 + 0x5A0) = t8;
  t9 = t8;
  if (a3 != 0) {
    t9 = t8 & 0x200000;
  }
  t10 = t9;
  if (a3 == 0) {
    t10 = t9 & (-12289);
    *(unsigned *)((char *)a0 + 0x5A0) = t10;
  }
  if ((a3 != 0) && (t10 != 0)) {
    func_004FD0B4(a0);
    *(unsigned char *)((char *)a0 + 0x4DC) = 8;
  }
  if (a1 != 0) {
    func_004F499C(a0, a2);
  }
  return r6;
}
