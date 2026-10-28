typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00320E80(unsigned, unsigned, unsigned, float);
void func_004EB970(unsigned a0, float fa0)
{
  unsigned t2;
  t2 = (unsigned)fa0;
  func_00320E80(*(unsigned *)((char *)a0 + 0x24), 0x4000004, t2, 1.0f);
  func_00320E80(*(unsigned *)((char *)a0 + 0x24), 0x4000008, t2, 1.0f);
  func_00320E80(*(unsigned *)((char *)a0 + 0x24), 0x4000009, t2, 1.0f);
  func_00320E80(*(unsigned *)((char *)a0 + 0x24), 0x400000A, t2, 1.0f);
  return;
}
