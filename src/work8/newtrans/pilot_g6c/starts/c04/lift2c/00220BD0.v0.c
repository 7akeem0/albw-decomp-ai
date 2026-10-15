typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_004FC218(unsigned, unsigned, unsigned, unsigned);
void func_00220BD0(unsigned a0, unsigned a1)
{
  switch (a1 + (-6)) {
  case 0: goto L5;
  case 1: goto L5;
  case 2: goto L2;
  case 3: goto L5;
  case 4: goto L5;
  case 5: goto L5;
  case 6: goto L4;
  case 7: goto L5;
  case 8: goto L6;
  case 9: goto L5;
  case 10: goto L5;
  case 11: goto L6;
  case 12: goto L6;
  case 13: goto L5;
  case 14: goto L5;
  default: goto L1;
  }
  L1:;
  goto L6;
  L2:;
  if (*(unsigned char *)((char *)a0 + 0x8E4) == 2) goto L8;
  goto L7;
  L4:;
  if (*(unsigned *)((char *)a0 + 0xA68) > 60u) goto L8;
  L5:;
  func_004FC218(a0, (-1), 0, 0x7FFF);
  return;
  L6:;
  if (*(unsigned char *)((char *)a0 + 0x8E4) == 2) goto L8;
  L7:;
  func_004FC218(a0, 0x11, 0, 0x7FFF);
  return;
  L8:;
  func_004FC218(a0, 0xD, 0, 0x7FFF);
  return;
}
