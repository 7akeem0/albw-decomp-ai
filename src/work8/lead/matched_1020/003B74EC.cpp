/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_003B74EC_4_2(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0055C4AC(unsigned, float);
extern unsigned func_0058A7D4(unsigned);
unsigned func_003B74EC(unsigned a0)
{
  unsigned h901, t2, t3, t9, t11, t12;
  h901 = *(unsigned *)((char *)a0 + 0x48) + 0x918;
  *(unsigned char *)((char *)h901) = 0;
  *(unsigned char *)((char *)a0 + 0x62) = 0;
  t2 = *(signed char *)((char *)a0 + 0x70);
  if (((t2 == 5) || (t2 == 3)) || (t2 == 4)) {
    return 1;
  }
  t3 = *(unsigned *)((char *)a0 + 0x48);
  if ((*(unsigned *)((char *)t3 + 0x3E8) == *(unsigned *)((char *)t3 + 0xA20)) && (*(unsigned *)((char *)a0 + 0x6C) >= 10u)) {
    t9 = ((unsigned (*)(unsigned, float))func_0055C4AC)((t3 + 0x800) + 0x348, 0.699999988079071f);
    if (t9 != 0) {
      t11 = func_0058A7D4(*(unsigned *)((char *)a0 + 0x48));
      t12 = (unsigned)bind_003B74EC_4_2(t11, 101U);
      if ((int)t12 <= 5) {
        ((unsigned (*)(unsigned, unsigned, unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x138))(a0, 5, 1);
        L6:;
        return 1;
      }
    }
  }
  ((unsigned (*)(unsigned, unsigned))*(unsigned *)((char *)*(unsigned *)((char *)a0) + 0xF8))(a0, 0);
  goto L6;
}
