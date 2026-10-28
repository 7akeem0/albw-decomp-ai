typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char data_007142C8[];
extern unsigned func_0058DABC(unsigned);
extern unsigned func_0058DE90(unsigned);
extern unsigned func_0058D6D0(unsigned);
extern unsigned func_0058D808(unsigned);
extern unsigned func_00519D74(unsigned);
extern void func_0051C38C(unsigned);
extern void func_002BF8D4(unsigned, unsigned);
extern void func_002317C0(unsigned, float);
void func_0044A238(unsigned a0)
{
  unsigned t2, t4, t7, t9, t10, t12;
  t2 = func_0058DABC(*(unsigned *)((char *)((unsigned)data_007142C8)));
  if (t2 == 0) goto L5;
  t4 = func_0058DE90(*(unsigned *)((char *)((unsigned)data_007142C8)));
  if (t4 != 0) goto L3;
  if (*(unsigned char *)((char *)a0 + 0x293) == 0) goto L5;
L3:;
  t7 = func_0058D6D0(*(unsigned *)((char *)((unsigned)data_007142C8)));
  if (t7 == 0) goto L5;
  t9 = func_0058D808(*(unsigned *)((char *)((unsigned)data_007142C8)));
  if (t9 != 0) {
    t10 = *(unsigned *)((char *)((unsigned)data_007142C8));
    func_00519D74(t10);
  }
L5:;
  func_0051C38C(*(unsigned *)((char *)((unsigned)data_007142C8)));
  t12 = *(unsigned *)((char *)a0 + 0x210);
  if (*(unsigned char *)((char *)t12 + 0x5D) != 0) goto L7;
  func_002BF8D4(t12, 1);
  func_002317C0(t12 + 0x6C, 1.0f);
  return;
L7:;
  return;
}
