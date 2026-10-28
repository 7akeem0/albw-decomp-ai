typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_002771B4(unsigned a0, unsigned a1)
{
  unsigned t4;
  if ((*(float *)((char *)(a0 + 0x15800) + 0x36C)) < (*(float *)((char *)a1 + 0x14))) {
    t4 = (a0 + 0x15800) + 0x368;
    *(unsigned *)((char *)t4) = *(unsigned *)((char *)a1 + 0x10);
    *(unsigned *)((char *)t4 + 4) = *(unsigned *)((char *)a1 + 0x14);
    *(unsigned *)((char *)t4 + 8) = *(unsigned *)((char *)a1 + 0x18);
  }
  return 1;
}
