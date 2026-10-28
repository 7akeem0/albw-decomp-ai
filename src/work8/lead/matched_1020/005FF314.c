typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char bss_0079CAB8[];
extern unsigned func_003E3F00(unsigned, unsigned, unsigned, unsigned);
extern unsigned func_0060226C(unsigned);
extern void func_003E3F10(void);
void func_005FF314(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned k1, k2, t1, t2, t5, t8, ka9;
  k1 = 0;
  k2 = (unsigned)bss_0079CAB8;
  t1 = *(unsigned *)((char *)k2 + 0x9C);
  t2 = *(unsigned *)((char *)t1 + 0x20);
  t5 = *(unsigned *)((char *)t1 + 0x18) + (((t2 << 3) - t2) << 2);
  *(unsigned char *)((char *)t5) = k1;
  *(unsigned *)((char *)(t5 + 4)) = a0;
  *(unsigned *)((char *)(t5 + 4) + 4) = a1;
  *(unsigned *)((char *)(t5 + 4) + 8) = a2;
  t8 = *(unsigned *)((char *)t5 + 0x10) | 1;
  *(unsigned *)((char *)t5 + 0x10) = t8;
  func_003E3F00(t8, a1, a2, t5);
  *(unsigned *)((char *)t1 + 0x20) = *(unsigned *)((char *)t1 + 0x20) + 1;
  if (*(unsigned *)((char *)k2 + 0xA0) != t1) goto L4;
  if (*(unsigned char *)((char *)k2 + 0x12) == 0) goto L4;
  if (*(unsigned char *)((char *)k2 + 0x11) != 0) goto L4;
  ka9 = k2 + 0x11;
  *(unsigned char *)((char *)ka9) = 1;
  func_0060226C(1);
L4:;
  func_003E3F10();
  return;
}
