typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_001164F4(unsigned, unsigned);
extern void func_00110490();
void func_003E40F4(unsigned a0)
{
  unsigned k1, k2, t3, t4;
  k1 = 0;
  k2 = 1;
  *(unsigned *)((char *)a0) = k1;
  *(unsigned *)((char *)a0 + 4) = k2;
  *(unsigned *)((char *)a0 + 8) = k1;
  *(unsigned *)((char *)a0 + 0xC) = k1;
  *(unsigned *)((char *)a0 + 0x10) = k1;
  *(unsigned *)((char *)a0 + 0x14) = k1;
  *(unsigned *)((char *)a0 + 0x18) = k1;
  *(unsigned *)((char *)a0 + 0x1C) = k1;
  *(unsigned short *)((char *)a0 + 0x20) = 0xFDE8;
  *(unsigned short *)((char *)a0 + 0x22) = k1;
  *(unsigned short *)((char *)a0 + 0x24) = k1;
  func_001164F4(a0 + 0x26, 0x66);
  *(unsigned *)((char *)a0 + 0x8C) = k1;
  func_00110490(a0 + 0x90, 0x82);
  *(unsigned char *)((char *)a0 + 0x112) = k1;
  *(unsigned char *)((char *)a0 + 0x113) = k2;
  *(unsigned char *)((char *)a0 + 0x114) = k1;
  *(unsigned char *)((char *)a0 + 0x115) = k2;
  *(unsigned char *)((char *)a0 + 0x116) = k1;
  *(unsigned char *)((char *)a0 + 0x117) = k2;
  *(unsigned char *)((char *)a0 + 0x118) = k1;
  *(unsigned char *)((char *)a0 + 0x119) = k1;
  *(unsigned char *)((char *)a0 + 0x11A) = k1;
  *(unsigned char *)((char *)a0 + 0x11B) = k1;
  *(unsigned char *)((char *)a0 + 0x11C) = k2;
  *(unsigned char *)((char *)a0 + 0x11D) = k1;
  *(unsigned char *)((char *)a0 + 0x354) = k1;
  *(unsigned *)((char *)a0 + 0x120) = (-1);
  t3 = a0 + 0x12C;
  *(unsigned *)((char *)a0 + 0x124) = (-1);
  *(unsigned *)((char *)a0 + 0x128) = (-1);
  t4 = a0 + 0x100;
  *(unsigned *)((char *)t3) = (-1);
  *(unsigned *)((char *)t3 + 4) = k1;
  *(unsigned short *)((char *)t4 + 0x34) = k1;
  *(unsigned *)((char *)a0 + 0x138) = (-1);
  *(unsigned *)((char *)a0 + 0x13C) = (-1);
  *(unsigned *)((char *)a0 + 0x140) = (-1);
  *(unsigned *)((char *)a0 + 0x144) = (-1);
  *(unsigned short *)((char *)t4 + 0x48) = k1;
  *(unsigned *)((char *)a0 + 0x14C) = k1;
  func_00110490(a0 + 0x150, 0x202, t3);
  return;
}
