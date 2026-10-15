/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_003BDFF4_4_2(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0055C4AC(unsigned, float);
extern unsigned func_0058A7D4(unsigned);
void func_003BDFF4(unsigned a0)
{
  unsigned t1, t6, t8, t9, t13;
  t1 = *(signed char *)((char *)a0 + 0x70);
  if ((t1 != 5) && (t1 != 3)) {
    if ((t1 != 4) && (*(unsigned *)((char *)a0 + 0x6C) >= 10u)) {
      t6 = ((unsigned (*)(unsigned, float))func_0055C4AC)((*(unsigned *)((char *)a0 + 0x48) + 0x800) + 0x348, 0.699999988079071f);
      if (t6 == 0) {
        return;
      }
      t8 = func_0058A7D4(*(unsigned *)((char *)a0 + 0x48));
      t9 = (unsigned)bind_003BDFF4_4_2(t8, 101U);
      if ((int)t9 > 5) {
        return;
      }
      t13 = *(unsigned *)((char *)*(unsigned *)((char *)a0) + 0x138);
      ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t13)(a0, 5, 1, t13);
      return;
    }
  }
}
