typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0030B934(void);
void func_0030D8E4(unsigned a0)
{
  unsigned t1, t2, t3, t4, t7, t9, t10, t11, ka6;
  unsigned t15, t16, t17;
  t1 = *(unsigned *)((char *)a0 + 0xF0);
  t2 = *(unsigned short *)((char *)t1 + 0xA);
  if (((t2 == 0) || (t2 == 1)) || (t2 == 2)) goto L2;
  func_0030B934();
  return;
L2:;
  t3 = *(unsigned *)((char *)a0 + 0x130);
  if (t3 == 0) goto L4;
  t15 = *(unsigned *)((char *)*(unsigned *)((char *)t3));
  t16 = (unsigned short)*(unsigned *)((char *)t1 + 4);
  t17 = *(unsigned short *)((char *)t1 + 0xC) & 0xFF;
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t15)(t3, t17, t16, t3);
  return;
L4:;
  ka6 = a0 + 0x1C;
  t4 = *(unsigned *)((char *)ka6);
  t7 = t2 & 0xFF;
  t9 = *(unsigned short *)((char *)t1 + 0xC) & 0xFF;
  t10 = (unsigned short)*(unsigned *)((char *)t1 + 4);
  t11 = *(unsigned *)((char *)*(unsigned *)((char *)(*(unsigned *)((char *)ka6))) + 4);
  ((unsigned (*)(unsigned, unsigned, unsigned, unsigned))t11)(t4, t7, t9, t10);
  return;
}
