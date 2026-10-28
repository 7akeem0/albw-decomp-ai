typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_002570F0(unsigned);
extern void func_00109D6C(unsigned);
extern void func_0010C58C(unsigned, unsigned);
void func_00149D44(unsigned a0)
{
  unsigned h901;
  func_002570F0(*(unsigned *)((char *)a0 + 0x18));
  *(float *)((char *)a0 + 0x98) = 25.0f;
  *(float *)((char *)a0 + 0x9C) = 25.0f;
  func_00109D6C(*(unsigned *)((char *)a0 + 0x18));
  func_0010C58C(a0, *(unsigned *)((char *)a0 + 0x1C));
  *(unsigned char *)((char *)a0 + 0xA0) = 1;
  *(unsigned char *)((char *)a0 + 0xA1) = 1;
  h901 = a0;
  *(unsigned char *)((char *)h901 + 0xA2) = 0;
  return;
}
