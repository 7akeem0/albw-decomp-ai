typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0052F888(unsigned a0, unsigned a1)
{
  unsigned t1, t2, t3, t5, t6, t7, t8, t9;
  t1 = *(unsigned char *)((char *)a0 + 0x4F1);
  t2 = a0 + 0x400;
  if (t1 == 0) {
    t3 = *(unsigned char *)((char *)t2 + 0xF2);
    if (t3 != 0) {
      t5 = a1 + 8;
      t6 = *(unsigned *)((char *)a0 + 0x3D0);
      t7 = *(unsigned *)((char *)(a0 + 0x3D0) + 4);
      t8 = *(unsigned *)((char *)(a0 + 0x3D0) + 8);
      *(unsigned *)((char *)t5) = t6;
      *(unsigned *)((char *)t5 + 4) = t7;
      *(unsigned *)((char *)t5 + 8) = t8;
      t9 = *(unsigned char *)((char *)a0 + 0x4CC);
      return t9;
    }
  }
  return 0;
}
