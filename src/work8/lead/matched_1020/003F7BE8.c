typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

void func_003F7BE8(unsigned a0, unsigned a1)
{
  unsigned k1, t2, t4, t6, t9, t18;
  k1 = 0x5810;
  t4 = (a1 + 0x5800) + 0x74;
  t2 = *(unsigned *)((char *)k1 + a1);
  *(unsigned *)((char *)(k1 + 4) + a1) = 0;
  t6 = *(unsigned *)((char *)t4);
  if (*(unsigned *)((char *)(a0 + (t2 << 2)) + 0x340) != a1) goto L2;
  *(unsigned *)((char *)(a0 + (t2 << 2)) + 0x340) = t6;
  if (t6 != 0) {
  }
  t18 = (t6 + 0x5000);
  if (t6 != 0) {
    t18 = (t6 + 0x5000) + 0x870;
    *(unsigned *)((char *)t18) = 0;
  }
  return;
L2:;
  t9 = (a1 + 0x5000) + 0x870;
  if (t6 == 0) goto L4;
  *(unsigned *)((char *)(t6 + 0x5000) + 0x870) = *(unsigned *)((char *)t9);
L4:;
  *(unsigned *)((char *)(*(unsigned *)((char *)t9) + 0x5800) + 0x74) = *(unsigned *)((char *)t4);
  return;
}
