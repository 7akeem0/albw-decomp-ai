typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
void func_002B4160(unsigned a0)
{
  unsigned t1, t2;
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E0) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  func_004FABDC(a0, 0, (-1), 0);
  t1 = a0 + 0x800;
  t2 = t1 + 0x134;
  *(unsigned *)((char *)a0 + 0x938) = 0;
  *(float *)((char *)t2 + 8) = 0.0f;
  *(unsigned *)((char *)a0 + 0x934) = 0;
  return;
}
