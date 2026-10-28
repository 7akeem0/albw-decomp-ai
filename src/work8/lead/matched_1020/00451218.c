typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_001B6DE0(unsigned);
extern void func_004A5D28(unsigned);
void func_00451218(unsigned a0)
{
  unsigned k1, r4, r5, r6, r7, t1, t2, t5;
  unsigned t7, t11, t12, t13, t14, t15, t16;
  func_001B6DE0(a0);
  t1 = *(unsigned char *)((char *)a0 + 0x156);
  r5 = a0;
  if (t1 == 1) {
    t2 = *(unsigned *)((char *)a0 + 0x108);
    r4 = *(unsigned *)((char *)a0 + 0x110);
    r6 = r4 + (t2 << 2);
    r5 = a0;
    if (r4 != r6) {
      do {
        t5 = *(unsigned *)((char *)r4);
        func_004A5D28(t5);
        r4 = r4 + 4;
      } while (r4 != r6);
    }
  }
  t7 = *(unsigned *)((char *)r5 + 0x4C);
  r6 = *(unsigned *)((char *)r5 + 0x54);
  k1 = 0;
  r4 = t7 - r6;
  r7 = k1;
  goto L5;
  L4:;
  t13 = *(unsigned *)((char *)r4);
  t14 = *(unsigned *)((char *)t13 + 0x34);
  ((unsigned (*)(unsigned))t14)(r4);
  t15 = r4 + r6;
  *(unsigned char *)((char *)r4 + 0xE) = r7;
  *(unsigned char *)((char *)r4 + 0xD) = r7;
  t16 = *(unsigned *)((char *)t15 + 4);
  r4 = t16 - r6;
  L5:;
  t11 = r5 + 0x48;
  t12 = t11 - (*(unsigned *)((char *)r5 + 0x54));
  if (r4 != t12) goto L4;
  return;
}
