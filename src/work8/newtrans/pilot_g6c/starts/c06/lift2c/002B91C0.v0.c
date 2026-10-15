typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_00115DAC(unsigned, unsigned, unsigned, float);
void func_002B91C0(unsigned a0, unsigned a1)
{
  unsigned t2, t4;
  float x1;
  if (*(unsigned char *)((char *)a0 + 0x392) != 9) {
    x1 = *(float *)((char *)(a0 + 0x800) + 0x258);
    t4 = a0 + 0x3DC;
    func_00115DAC(t4, a1, t4, x1 + ((1.0f - x1) * 0.015625f));
    return;
  }
  t2 = a0 + 0x3DC;
  func_00115DAC(t2, a1, t2, 0.05000000074505806f);
  return;
}
