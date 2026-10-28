typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern void func_002317C0(unsigned, float);
void func_004A5C54(unsigned a0)
{
  unsigned h901, h902;
  if ((*(unsigned short *)((char *)*(unsigned *)((char *)a0 + 0x14) + 0x16) & 2) != 0) {
    h901 = a0 + 0x1C;
    h902 = a0 + 0x68;
    *(unsigned *)((char *)h902) = *(unsigned *)((char *)h901);
    *(unsigned short *)((char *)a0 + 0x62) = 7;
    a0 = a0 + 0x60;
    *(unsigned short *)((char *)a0) = 0;
    func_002317C0(a0, 1.0f);
    return;
  }
  return;
}
