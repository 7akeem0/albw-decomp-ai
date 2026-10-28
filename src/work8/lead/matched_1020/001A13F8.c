typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_003521F0(unsigned, unsigned);
void func_001A13F8(unsigned a0)
{
  unsigned t4, t5;
  *(float *)((char *)(a0 + 0x1000) + 0x218) = 0.09000000357627869f;
  *(unsigned *)((char *)(a0 + 0x1000) + 0x1C8) = 0;
  func_003521F0(a0 + 0x324, 0);
  t4 = *(short *)((char *)*(unsigned *)((char *)a0 + 0x3A0) + 2);
  t5 = *(short *)((char *)a0 + 0x508);
  if ((int)(unsigned short)(unsigned)(((float)(int)t4) * 0.2857142984867096f) >= (int)t5) {
    *(float *)((char *)(a0 + 0x1000) + 0x218) = 0.18000000715255737f;
    *(unsigned *)((char *)(a0 + 0x1000) + 0x1C8) = 2;
    func_003521F0(a0 + 0x324, 2);
    return;
  }
  if ((int)(unsigned short)(unsigned)(((float)(int)t4) * 0.5714285969734192f) < (int)t5) {
    return;
  }
  *(float *)((char *)(a0 + 0x1000) + 0x218) = 0.14000000059604645f;
  *(unsigned *)((char *)(a0 + 0x1000) + 0x1C8) = 1;
  func_003521F0(a0 + 0x324, 1);
  return;
}
