typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_0054DDF4(unsigned, unsigned);
extern unsigned func_004FABDC(unsigned, unsigned, unsigned, unsigned);
extern void func_004FB4E0(unsigned, float);
void func_00263180(unsigned a0)
{
  unsigned t2, t3, t5;
  t2 = *(unsigned *)((char *)a0 + 0x420);
  *(unsigned char *)((char *)t2 + 0x22) = 0;
  t3 = func_0054DDF4(a0, 0);
  t5 = *(unsigned *)((char *)(a0 + 0x420));
  *(unsigned short *)((char *)t5 + 0x30) = (*(unsigned short *)((char *)t3));
  *(float *)((char *)a0 + 0x3DC) = 0.0f;
  *(float *)((char *)a0 + 0x3E4) = 0.0f;
  func_004FABDC(a0, 4, (-1), 0);
  func_004FB4E0(a0, 1.0f);
  return;
}
