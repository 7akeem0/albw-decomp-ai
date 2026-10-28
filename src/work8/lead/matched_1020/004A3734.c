typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006A8B40[];
extern char ro_006A8B44[];
void func_004A3734(unsigned a0)
{
  unsigned t1, t2, t3, t4, ka8;
  *(unsigned *)((char *)a0) = 0;
  *(unsigned *)((char *)a0 + 4) = 0;
  *(unsigned *)((char *)a0 + 0x18) = 0;
  *(unsigned *)((char *)a0 + 0x1C) = 0;
  *(unsigned *)((char *)a0 + 0x20) = 0;
  t1 = *(unsigned *)((char *)ro_006A8B44);
  *(unsigned *)((char *)a0 + 0x28) = t1;
  t2 = *(unsigned *)((char *)ro_006A8B44);
  *(unsigned *)((char *)a0 + 0x2C) = t2;
  t3 = *(unsigned *)((char *)ro_006A8B44);
  *(unsigned *)((char *)a0 + 0x30) = t3;
  t4 = *(unsigned *)((char *)ro_006A8B40);
  ka8 = a0 + 0x38;
  *(unsigned *)((char *)ka8) = 0;
  *(unsigned *)((char *)a0 + 0x34) = t4;
  *(unsigned *)((char *)a0 + 0x3C) = 0;
  return;
}
