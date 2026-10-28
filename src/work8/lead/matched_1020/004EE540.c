typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006ED898[];
extern void func_0010F1F8(unsigned);
extern unsigned func_004A1520(unsigned);
void func_004EE540(unsigned a0)
{
  unsigned k1, t1, t2, t5, t6, ka1;
  k1 = 0;
  *(unsigned *)((char *)a0) = (unsigned)ro_006ED898;
  ka1 = a0 + 0x5C;
  t1 = *(unsigned *)((char *)ka1);
  t2 = a0 + 0x50;
  if (t1 == 0) goto L2;
  *(unsigned *)((char *)t2 + 0xC) = k1;
  func_0010F1F8(t2);
  *(unsigned *)((char *)t1 + 8) = *(unsigned *)((char *)t1 + 8) + (-1);
L2:;
  t5 = *(unsigned *)((char *)a0 + 0x4C);
  t6 = a0 + 0x40;
  if (t5 == 0) goto L4;
  *(unsigned *)((char *)t6 + 0xC) = k1;
  func_0010F1F8(t6);
  *(unsigned *)((char *)t5 + 8) = *(unsigned *)((char *)t5 + 8) + (-1);
L4:;
  func_004A1520(a0);
  return;
}
