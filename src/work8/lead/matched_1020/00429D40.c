typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
extern unsigned func_00549C10(unsigned, unsigned, unsigned);
extern void func_0048E128(unsigned, unsigned, unsigned, unsigned);
extern void func_00231ED0(unsigned);
void func_00429D40(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t4, t5, t6, t7, t8;
  unsigned t9, t10, t11, t12, t13, t14, t15, t16;
  t1 = *(unsigned *)((char *)a1);
  if (t1 != 0) {
    if (t1 != 2) {
      return;
    }
    t3 = *(unsigned *)((char *)data_00709DF8);
    t4 = *(unsigned *)((char *)t3 + 0x74);
    t5 = *(unsigned *)((char *)t4);
    t6 = *(unsigned *)((char *)t5 + 0x28);
    ((unsigned (*)(unsigned))t6)(t4);
    t7 = *(unsigned *)((char *)a0 + 0x1EC);
    *(unsigned *)((char *)t7 + 0x8C) = t4;
    t8 = *(unsigned *)((char *)a0 + 0x1EC);
    t9 = *(unsigned *)((char *)t8);
    t10 = *(unsigned *)((char *)t9);
    t11 = ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t10)(t8, 1, 1, 1);
    t12 = *(unsigned *)((char *)t11);
    t13 = *(unsigned *)((char *)t12 + 0x14);
    ((unsigned (*)(unsigned))t13)(t11);
    t14 = *(unsigned *)((char *)a0 + 0x1EC);
    *(unsigned char *)((char *)t14 + 0x93) = 0;
    t15 = *(unsigned *)((char *)a0 + 0x1EC);
    *(unsigned char *)((char *)t15 + 0x92) = 5;
    t16 = *(unsigned *)((char *)a0 + 0x1EC);
    func_00549C10(t16, 5, 0);
    func_0048E128(a0, 0xF, 2, 0x1E);
    return;
  }
  t2 = *(unsigned *)((char *)a0 + 0x1EC);
  func_00231ED0(t2);
  return;
}
