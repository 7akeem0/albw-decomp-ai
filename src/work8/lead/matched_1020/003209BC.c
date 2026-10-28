typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006E0754[];
extern unsigned func_002D439C(unsigned, unsigned);
extern unsigned func_004A3700(unsigned, unsigned);
extern unsigned func_004A3788(unsigned);
extern unsigned func_004EE540(unsigned, float);
extern unsigned func_002D5D3C(unsigned);
void func_003209BC(unsigned a0)
{
  unsigned t1, t2, t4, t5, t10, t12, t13, t18;
  unsigned t19, t20, t25, t29;
  *(unsigned *)((char *)a0) = (unsigned)ro_006E0754;
  t1 = a0 + 0x164;
  t2 = *(unsigned *)((char *)a0 + 0x70);
  func_002D439C(t2, t1);
  *(float *)((char *)*(unsigned *)((char *)a0 + 0x50) + 0x160) = 0.0f;
  t5 = *(unsigned *)((char *)a0 + 0x19C);
  t4 = a0 + 0x19C;
  if (t5 == 0) goto L3;
  if (*(unsigned *)((char *)t5 + 0x1C) != *(unsigned *)((char *)t4 + 4)) goto L3;
  t10 = (*(unsigned *)((char *)t5 + 0x3C) & (-69)) | 8;
  *(unsigned *)((char *)t5 + 0x3C) = t10;
  func_004A3700(t5, t10);
L3:;
  func_004A3788(a0 + 0x18C);
  t12 = *(unsigned *)((char *)a0 + 0x194);
  t13 = a0 + 0x194;
  if (t12 == 0) goto L6;
  if (*(unsigned *)((char *)t12 + 0x1C) != *(unsigned *)((char *)t13 + 4)) goto L6;
  t18 = (*(unsigned *)((char *)t12 + 0x3C) & (-69)) | 8;
  *(unsigned *)((char *)t12 + 0x3C) = t18;
  func_004A3700(t12, t18);
L6:;
  t19 = *(unsigned *)((char *)a0 + 0x1A4);
  t20 = a0 + 0x1A4;
  if (t19 == 0) goto L9;
  if (*(unsigned *)((char *)t19 + 0x1C) != *(unsigned *)((char *)t20 + 4)) goto L9;
  t25 = (*(unsigned *)((char *)t19 + 0x3C) & (-69)) | 8;
  *(unsigned *)((char *)t19 + 0x3C) = t25;
  func_004A3700(t19, t25);
L9:;
  *(float *)((char *)(*(unsigned *)((char *)a0 + 0x28) + 0x400) + 0x2CC) = 3.4028234663852886e+38f;
  t29 = func_004EE540(a0 + 0xE4, 3.4028234663852886e+38f);
  func_002D5D3C(t29 + (-228));
  return;
}
