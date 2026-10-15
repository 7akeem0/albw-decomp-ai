typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_0070D858[];
extern unsigned func_00523774(unsigned, unsigned);
unsigned func_001CADCC(unsigned a0, unsigned a1, unsigned a2, unsigned a3)
{
  unsigned r0, t1, t2, t3, t4;
  t1 = *(unsigned *)((char *)data_0070D858);
  switch (a3) {
  case 0: goto L2;
  case 1: goto L2;
  case 2: goto L2;
  case 3: goto L5;
  case 4: goto L7;
  case 5: goto L9;
  default: goto L1;
  }
  L1:;
  r0 = 0;
  return r0;
  L2:;
  if (*(unsigned char *)((char *)t1 + 0x2E0) == 0) {
    return 1;
  }
  r0 = 0;
  return r0;
  L5:;
  t4 = func_00523774(t1, 6);
  r0 = t4;
  if (t4 == 0) {
    return r0;
  }
  return 1;
  L7:;
  t3 = func_00523774(t1, 7);
  r0 = t3;
  if (t3 == 0) {
    return r0;
  }
  return 1;
  L9:;
  t2 = func_00523774(t1, 8);
  r0 = t2;
  if (t2 == 0) {
    return r0;
  }
  return 1;
}
