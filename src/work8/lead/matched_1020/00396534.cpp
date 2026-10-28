/* L2C-CPP */
typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00111A64(unsigned);
static inline unsigned bind_00396534_2_2(unsigned p0, unsigned limit) { return (unsigned)(((unsigned long long)func_00111A64(p0) * limit) >> 32); }

extern unsigned func_0055DD88(unsigned, unsigned, unsigned);
extern unsigned func_0058A7D4(unsigned);
extern unsigned func_00396AC0(unsigned, unsigned);
unsigned func_00396534(unsigned a0)
{
  unsigned r0, t1, t5, t7, t8, t12, t14, t16;
  unsigned t17, t19, t20, t24, t26, t27, t31, t33;
  unsigned t34, t38, t40;
  t1 = *(unsigned *)((char *)a0);
  t5 = (t1 + 0x800) + 0x3C8;
  t7 = func_0055DD88(t5, *(unsigned char *)((char *)(t1 + 0x1400) + 0x88), t5);
  if (t7 == 0) {
    t8 = *(unsigned *)((char *)a0);
    t12 = (t8 + 0x800) + 0x3C8;
    t14 = func_0055DD88(t12, *(unsigned char *)((char *)(t8 + 0x1400) + 0x89), t12);
    r0 = t14;
    if (t14 == 0) goto L10;
  }
  t16 = func_0058A7D4(*(unsigned *)((char *)a0));
  t17 = (unsigned)bind_00396534_2_2(t16, 101U);
  t19 = t17;
  t20 = *(unsigned *)((char *)a0);
  t24 = (t20 + 0x800) + 0x3C8;
  t26 = func_0055DD88(t24, *(unsigned char *)((char *)(t20 + 0x1400) + 0x88), t24);
  if (t26 != 0) {
    t27 = *(unsigned *)((char *)a0);
    t31 = (t27 + 0x800) + 0x3C8;
    t33 = func_0055DD88(t31, *(unsigned char *)((char *)(t27 + 0x1400) + 0x89), t31);
    if (t33 != 0) {
      if ((int)t19 >= 0x32) goto L7;
      goto L8;
    }
  }
  t34 = *(unsigned *)((char *)a0);
  t38 = (t34 + 0x800) + 0x3C8;
  t40 = func_0055DD88(t38, *(unsigned char *)((char *)(t34 + 0x1400) + 0x88), t38);
  if (t40 == 0) goto L8;
  L7:;
  func_00396AC0(a0, *(unsigned char *)((char *)(*(unsigned *)((char *)a0) + 0x1400) + 0x88));
  goto L9;
  L8:;
  func_00396AC0(a0, *(unsigned char *)((char *)(*(unsigned *)((char *)a0) + 0x1400) + 0x89));
  L9:;
  r0 = 1;
  L10:;
  return r0;
}
