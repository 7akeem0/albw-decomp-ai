typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00115C54(unsigned, unsigned, unsigned);
extern unsigned func_00392C20(unsigned);
extern void func_00289F70(unsigned, unsigned, unsigned);
void func_00289F10(unsigned a0)
{
  unsigned t1, t4, t6, t10, t11, ka7;
  t1 = a0 + 0x3D0;
  func_00115C54(t1, t1, a0 + 0x3DC);
  t4 = func_00392C20(a0 + 0x5C0);
  if (!(t4 != 0)) { } else {
    *(unsigned char *)((char *)a0 + 0x5D4) = (1);
  }
  t6 = *(unsigned *)((char *)a0 + 0x478);
  *(unsigned *)((char *)(t6 + 0x164)) = *(unsigned *)((char *)t6 + 0x164) | 0x40000000;
  *(unsigned *)((char *)t6 + 0x74) = *(unsigned *)((char *)a0 + 0x5A8);
  t10 = *(unsigned *)((char *)a0 + 0x5AC);
  *(unsigned *)((char *)t6 + 0x78) = t10;
  ka7 = a0 + 0x5B0;
  t11 = *(unsigned *)((char *)ka7);
  *(unsigned *)((char *)t6 + 0x7C) = t11;
  func_00289F70(a0, t11, t10);
  return;
}
