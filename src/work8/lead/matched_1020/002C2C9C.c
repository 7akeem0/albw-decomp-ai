typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern char ro_006C57E0[];
extern char ro_006F5988[];
void func_002C2C9C(unsigned a0, unsigned a1)
{
  unsigned h901;
  *(unsigned *)((char *)a0 + 4) = (unsigned)ro_006C57E0;
  *(unsigned *)((char *)a0) = (unsigned)ro_006F5988;
  *(unsigned *)((char *)a0 + 0xC) = (unsigned)ro_006C57E0;
  h901 = a0 + 8;
  *(unsigned *)((char *)h901) = (unsigned)ro_006F5988;
  *(unsigned *)((char *)a0 + 0x10) = a1;
  *(unsigned *)((char *)(a0 + 0x10) + 4) = 0;
  *(unsigned *)((char *)a0 + 0x18) = 0;
  *(unsigned char *)((char *)a0 + 0x38) = 1;
  *(unsigned char *)((char *)a0 + 0x1C) = 0;
  *(unsigned char *)((char *)a0 + 0x1D) = 0;
  *(unsigned *)((char *)a0 + 0x30) = 0;
  *(unsigned *)((char *)a0 + 0x34) = 0;
  *(unsigned *)((char *)a0 + 0x24) = 0;
  *(unsigned *)((char *)a0 + 0x20) = 0;
  *(unsigned *)((char *)a0 + 0x2C) = 0;
  *(unsigned *)((char *)a0 + 0x28) = 0;
  *(unsigned char *)((char *)a0 + 0x39) = 0xC4;
  return;
}
