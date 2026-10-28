typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_00709DF8[];
unsigned func_005400C4(void)
{
  unsigned t1, t2;
  t1 = *(unsigned *)((char *)data_00709DF8);
  t1 = t1 + 0x18;
  t2 = *(signed char *)((char *)t1);
  if (t2 == 24u) goto L4;
  if (t2 == 25u) goto L6;
  if (t2 == 26u) goto L8;
  goto L9;
L4:;
  if (*(unsigned *)((char *)t1 + 4) == 0) goto L10;
  goto L9;
L6:;
  if (*(unsigned *)((char *)t1 + 4) == 0) goto L10;
  goto L9;
L8:;
  if (*(unsigned *)((char *)t1 + 4) == 0) goto L10;
L9:;
  return 0;
L10:;
  return 1;
}
