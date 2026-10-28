typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

extern unsigned func_00623128(void);
void func_002CC7B4(unsigned a0)
{
  unsigned h901, h902, h903, t2;
  func_00623128();
  t2 = a0 + 0x800;
  h901 = a0 + 0x998;
  h902 = *(unsigned *)((char *)a0 + 0x3D0);
  *(unsigned *)((char *)h901) = h902;
  *(unsigned *)((char *)a0 + 0x99C) = *(unsigned *)((char *)a0 + 0x3D4);
  h903 = a0 + 0x3D8;
  *(unsigned *)((char *)a0 + 0x9A0) = *(unsigned *)((char *)h903);
  *(float *)((char *)t2 + 0x19C) = (*(float *)((char *)t2 + 0x19C)) + (*(float *)((char *)t2 + 0x38));
  *(unsigned short *)((char *)a0 + 0x9AE) = 0;
  return;
}
