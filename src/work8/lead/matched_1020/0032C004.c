typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004CEA18(unsigned, unsigned, unsigned);
void func_0032C004(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned t1, t4;
  if (a1 == 0) goto L4;
  *(unsigned *)((char *)a0 + 0x990) = a2;
  t4 = *(unsigned *)((char *)a0 + 0x970);
  if (a3 == 0) goto L3;
  func_004CEA18(t4, 0, 0);
  func_004CEA18(*(unsigned *)((char *)a0 + 0x970), 1, 1);
  return;
L3:;
  func_004CEA18(t4, 1, 0);
  func_004CEA18(*(unsigned *)((char *)a0 + 0x970), 0, 1);
  return;
L4:;
  *(unsigned *)((char *)a0 + 0xA68) = a2;
  t1 = *(unsigned *)((char *)a0 + 0xA48);
  if (a3 == 0) goto L6;
  func_004CEA18(t1, 0, 0);
  func_004CEA18(*(unsigned *)((char *)a0 + 0xA48), 1, 1);
  return;
L6:;
  func_004CEA18(t1, 1, 0);
  func_004CEA18(*(unsigned *)((char *)a0 + 0xA48), 0, 1);
  return;
}
