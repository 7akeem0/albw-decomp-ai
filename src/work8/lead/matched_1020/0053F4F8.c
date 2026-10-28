typedef unsigned int u32;
#pragma diag_suppress 513,144,167,147,120,191,1293,174,177,550,940,1,186,111,68,1296,230,1295,2523
#pragma diag_warning 188

unsigned func_0053F4F8(unsigned a0, unsigned a1, unsigned a2)
{
  unsigned r0, t2;
  if (a2 != 0) {
    t2 = *(signed char *)((char *)a2 + 2);
    if ((*(unsigned char *)((char *)a2) == 3) || (t2 == 6)) {
      r0 = 1;
      return r0;
    }
    if (((t2 == 7) || (t2 == 8)) || (t2 == 9)) {
      r0 = 1;
      return r0;
    }
  }
  r0 = a1 & 0x100000;
  if (r0 == 0) {
    return r0;
  }
  r0 = 1;
  return r0;
}
